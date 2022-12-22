using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.AI;
using UnityEngine.SceneManagement;

/*
public static class SpawnPrefab
{
    public static GameObject spawnPrefab;
}*/
public class ARManager : MonoBehaviour
{
    public Text debugText_Game;

    public ARRaycastManager arRaycaster;
    public GameObject spawnPrefab;

    private Animator animator;
    public GameObject character;

    //private Renderer indicatorRdr;
    public GameObject indicator;
    private Transform IndicatorTr;
    public Material[] material;

    public Button makePrefabBtn;
    public Button PosterRecognizeBtn;
    private bool isMakePrefabBtnClick;

    #region Ŭ������ �ٴڿ� ������ ����

    List<ARRaycastHit> hits = new List<ARRaycastHit>();

    public void PlacePrefab()
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

    private void Awake()
    {
        animator = character.GetComponent<Animator>();
        //indicatorRdr = indicator.GetComponent<Renderer>();
        //indicatorRdr.enabled = true;
        //indicator.SetActive(false); // ���̾��Ű���� ��Ȱ��ȭ�س��� �ʿ� ������
        indicator = Instantiate(indicator);
        IndicatorTr = indicator.transform;
        indicator.SetActive(false);
    }

    void Update()
    {
        //Debug.Log("indicatorRdr =" + indicatorRdr);
        //PlacePrefab(); // ȭ�� ��ġ �� �� ����
        if (isMakePrefabBtnClick)
        {
            PlaceIndicator(); // ��ư ��ġ �� ǥ�õǴ� �ε������� �κп� �� ����
        }
        PlayerMove();

        debugText_Game.text = "table == null";
    }

    #region �ٴ� Ȱ��ȭ

    public ARPlaneManager arPlane;

    public void ShowPlane(bool b)
    {
        foreach (var plane in arPlane.trackables)
            plane.gameObject.SetActive(b);
    }

    #endregion

    #region ��ġ �̸����� ����
    public void OnClickMakePrefabBtn()
    {
        isMakePrefabBtnClick = true;
        indicator.SetActive(true);
        makePrefabBtn.onClick.AddListener(PlaceIndicatorPrefab);
    }
    #endregion

    #region ��ġ �̸����� (�ٴ� ǥ�ñ�(�ε�������))

    //public Transform IndicatorTr;
    List<ARRaycastHit> indicatorHits = new List<ARRaycastHit>();

    void PlaceIndicator()
    {
        //indicatorRdr.sharedMaterial = material[0];
        indicator.GetComponentInChildren<Renderer>().sharedMaterial = material[0];

        arRaycaster.Raycast(new Vector2(Screen.width * 0.5f, Screen.height * 0.5f), indicatorHits, TrackableType.Planes);

        if (indicatorHits.Count > 0)
        {
            IndicatorTr.position = indicatorHits[0].pose.position;
            IndicatorTr.rotation = indicatorHits[0].pose.rotation;
        }
    }
    #endregion

    #region ��ư���� ������ ��ġ
    public void PlaceIndicatorPrefab()
    {
        indicator.SetActive(false);

        //indicatorRdr.material.color = new Color(1, 1, 1, 0.5f); // 4��° ���� �� �����Ͽ� ���� ���� (2D ���)

        spawnPrefab.GetComponentInChildren<Renderer>().sharedMaterial = material[1];

        Pose hitPose = indicatorHits[0].pose;
        Instantiate(spawnPrefab, hitPose.position, hitPose.rotation);

        // ������ ��ġ �� ��ƼŬ
        Destroy(Instantiate(TouchParticle, hitPose.position, hitPose.rotation), 3);

        makePrefabBtn.onClick.RemoveAllListeners();
        makePrefabBtn.onClick.AddListener(OnClickMakePrefabBtn);
        isMakePrefabBtnClick = false;

        //makePrefabBtn.interactable = false;
        //PosterRecognizeBtn.interactable = true;

        //Debug.Log("��ġ�Ϸ�");
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

    #region �ν��ϱ� ��ư Ŭ�� �� �� ����
    public void OnClickButton() 
    {
        PosterRecognizeBtn.interactable = false;
        makePrefabBtn.interactable = true;
        SceneManager.LoadScene("ARScene");
    }
    #endregion
}

public static class PlayerPos
{
    public static Vector3 playerPos;
}