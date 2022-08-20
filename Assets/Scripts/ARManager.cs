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

    #region 바닥에 프리팹 놓기

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
        //PlacePrefab(); // 화면 터치 시 공 생성
        PlaceIndicator(); // 버튼 터치 시 표시되는 인디케이터 부분에 공 생성
        PlayerMove();
    }

    #region 바닥 활성화

    public ARPlaneManager arPlane;

    public void ShowPlane(bool b)
    {
        foreach (var plane in arPlane.trackables)
            plane.gameObject.SetActive(b);
    }

    #endregion

    #region 바닥 표시기(인디케이터)

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

    #region 원점 설정

    public ARSessionOrigin arOrigin;
    List<ARRaycastHit> originHits = new List<ARRaycastHit>();

    public void PlaceOrigin()
    {
        arRaycaster.Raycast(new Vector2(Screen.width * 0.5f, Screen.height * 0.5f), originHits, TrackableType.Planes);
        if(originHits.Count > 0)
        {
            Pose hitpose = originHits[0].pose;

            // 괄호 안에 들어가는 것이 원점이 됨
            arOrigin.MakeContentAppearAt(arOrigin.transform, hitpose.position, hitpose.rotation);
        }
    }
    #endregion

    #region 빛 감지

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
            //print($"밝기 : {brightness.Value} \n빛의 세기 : {fixBrightness} \n밝음 : {isBright}");
        }
    }
    #endregion

    #region 플레이어를 중심으로 이동

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

    #region 머테리얼 숨기기

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