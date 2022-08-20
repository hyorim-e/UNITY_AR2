using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.AI;

public class ARManager : MonoBehaviour
{
    private Animator animator;
    public GameObject character;

    #region �ٴڿ� ������ ����

    public ARRaycastManager arRaycaster;
    public GameObject spawnPrefab;
    List<ARRaycastHit> hits = new List<ARRaycastHit>();

    void PlacePrefab()
    {
        if (Input.touchCount == 0) return;

        Touch touch = Input.GetTouch(0);
        if (touch.phase != TouchPhase.Began) return;

        if(arRaycaster.Raycast(touch.position, hits, TrackableType.Planes))
        {
            Pose hitPose = hits[0].pose;
            Instantiate(spawnPrefab, hitPose.position, hitPose.rotation);
        }
    }

    #endregion

    ///*
    private void Awake()
    {
        animator = character.GetComponent<Animator>();
    }
    //*/

    void Update()
    {
        //PlacePrefab(); // ȭ�� ��ġ �� �� ����
        PlaceIndicator(); // ��ư ��ġ �� ǥ�õǴ� �ε������� �κп� �� ����
        PlayerMove();
    }

    #region �ٴ� Ȱ��ȭ

    public ARPlaneManager arPlane;

    public void ShowPlane(bool b)
    {
        foreach (var plane in arPlane.trackables)
            plane.gameObject.SetActive(b);
    }

    #endregion

    #region �ٴ� ǥ�ñ�(�ε�������)

    public Transform Indicator;
    List<ARRaycastHit> indicatorHits = new List<ARRaycastHit>();

    void PlaceIndicator()
    {
        arRaycaster.Raycast(new Vector2(Screen.width * 0.5f, Screen.height * 0.5f), indicatorHits, TrackableType.Planes);

        if (indicatorHits.Count > 0)
        {
            Indicator.position = indicatorHits[0].pose.position;
            Indicator.rotation = indicatorHits[0].pose.rotation;
        }
    }

    public void PlaceIndicatorPrefab()
    {
        Pose hitPose = indicatorHits[0].pose;
        Instantiate(spawnPrefab, hitPose.position, hitPose.rotation);
    }

    #endregion

    #region ���� ����

    public ARSessionOrigin arOrigin;
    List<ARRaycastHit> originHits = new List<ARRaycastHit>();

    public void PlaceOrigin()
    {
        arRaycaster.Raycast(new Vector2(Screen.width * 0.5f, Screen.height * 0.5f), originHits, TrackableType.Planes);
        if(originHits.Count > 0)
        {
            Pose hitpose = originHits[0].pose;

            // ��ȣ �ȿ� ���� ���� ������ ��
            arOrigin.MakeContentAppearAt(arOrigin.transform, hitpose.position, hitpose.rotation);
        }
    }
    #endregion

    #region �� ����

    public ARCameraManager arCameraManager;
    public Light currentLight;
    void OnEnable() => arCameraManager.frameReceived += FrameUpdated;
    void OnDisable() => arCameraManager.frameReceived -= FrameUpdated;

    void FrameUpdated(ARCameraFrameEventArgs args)
    {
        var brightness = args.lightEstimation.averageBrightness;

        if (brightness.HasValue)
        {
            bool isBright = brightness.Value > 0.3f;
            float fixBrightness = brightness.Value * 4f;
            currentLight.intensity = fixBrightness;
            //print($"��� : {brightness.Value} \n���� ���� : {fixBrightness} \n���� : {isBright}");
        }
    }
    #endregion

    #region �÷��̾ �߽����� �̵�

    public NavMeshAgent agent;
    public GameObject TouchParticle;

    public void MoveTarget()
    {
        if (Input.touchCount == 0) return;

        bool isAlived = Vector3.Distance(arOrigin.transform.position, agent.transform.position) <= 0.1f;
        if (isAlived) animator.SetBool("Touch", false);

        if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.forward, out RaycastHit hit))
        {
            animator.SetBool("Touch", true);

            agent.SetDestination(hit.point);
            Destroy(Instantiate(TouchParticle, hit.point, Quaternion.identity), 3);
        }
    }

    void PlayerMove()
    {
        PlayerPos.playerPos = agent.transform.position;
        arOrigin.transform.position = PlayerPos.playerPos;
        SetMapCenter(PlayerPos.playerPos);
    }

    #endregion

    #region ���׸��� �����

    public Material[] MapMts;

    void Start() => SetMapRadius(40f);
    void OnApplicationQuit() => SetMapRadius(float.MaxValue);

    void SetMapCenter(Vector3 vec)
    {
        Vector4 myVec = new Vector4(vec.x, vec.y, vec.z, 0);

        for (int i = 0; i < MapMts.Length; i++)
            MapMts[i].SetVector("_Center", myVec);
    }

    void SetMapRadius(float r)
    {
        for (int i = 0; i < MapMts.Length; i++)
            MapMts[i].SetFloat("_Radius", r);
    }

    #endregion
}

public static class PlayerPos
{
    public static Vector3 playerPos;
}