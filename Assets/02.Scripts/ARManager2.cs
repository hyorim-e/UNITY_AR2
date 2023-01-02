using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.AI;
using UnityEngine.SceneManagement;

public class ARManager2 : MonoBehaviour
{
    public ARRaycastManager arRaycaster;
    public GameObject spawnPrefab;

    private Animator animator;
    public GameObject character;

    public NavMeshAgent agent;
    public GameObject TouchParticle;

    public GameObject indicator;
    private Transform IndicatorTr;
    public Material[] material;

    public Button makePrefabBtn;
    public Button PosterRecognizeBtn;
    private bool isMakePrefabBtnClick;

    public Text debugText_Game;

    private void Awake()
    {
        animator = character.GetComponent<Animator>();

        indicator = Instantiate(indicator);
        IndicatorTr = indicator.transform;
        indicator.SetActive(false);
    }

    void Update()
    {
        //PlacePrefab(); // 화면 터치 시 공 생성
        if (isMakePrefabBtnClick)
        {
            PlaceIndicator(); // 버튼 터치 시 표시되는 인디케이터 부분에 공 생성
        }
        PlayerMove();

        //debugText_Game.text = PublicVars.spawnedObject.name;
        //debugText_Game.text = MyDataStruct.spawnedObject.name;
        //Debug.Log(PublicVars.spawnedObject);
    }

    #region 바닥 활성화

    public ARPlaneManager arPlane;

    public void ShowPlane(bool b)
    {
        foreach (var plane in arPlane.trackables)
            plane.gameObject.SetActive(b);
    }

    #endregion

    #region 배치 미리보기 진입
    public void OnClickMakePrefabBtn()
    {
        indicator.GetComponentInChildren<Renderer>().sharedMaterial = material[0];

        isMakePrefabBtnClick = true;
        indicator.SetActive(true);

        makePrefabBtn.onClick.RemoveAllListeners();
        makePrefabBtn.onClick.AddListener(PlaceIndicatorPrefab);

        //PublicVars.spawnedObject.SetActive(true);
        //MyDataStruct.spawnedObject.SetActive(true);
    }
    #endregion

    #region 배치 미리보기 (바닥 표시기(인디케이터))

    List<ARRaycastHit> indicatorHits = new List<ARRaycastHit>();

    void PlaceIndicator()
    {
        arRaycaster.Raycast(new Vector2(Screen.width * 0.5f, Screen.height * 0.5f), indicatorHits, TrackableType.Planes);

        if (indicatorHits.Count > 0)
        {
            IndicatorTr.position = indicatorHits[0].pose.position;
            IndicatorTr.rotation = indicatorHits[0].pose.rotation;
        }
    }
    #endregion

    #region 버튼으로 프리팹 배치
    public void PlaceIndicatorPrefab()
    {
        indicator.SetActive(false);

        //spawnPrefab.GetComponentInChildren<Renderer>().sharedMaterial = material[1];
        //PublicVars.spawnedObject.GetComponentInChildren<Renderer>().sharedMaterial = PublicVars.originMt;

        //Pose hitPose = indicatorHits[0].pose;
        //Instantiate(spawnPrefab, hitPose.position, hitPose.rotation);
        //Instantiate(PublicVars.spawnedObject, hitPose.position, hitPose.rotation);
        //Instantiate(spawnPrefab, IndicatorTr.position, IndicatorTr.rotation); // 유니티 에디터 내 Play 테스트용
        //Instantiate(PublicVars.spawnedObject, IndicatorTr.position, IndicatorTr.rotation);
        //PublicVars.spawnedObject.transform.position = IndicatorTr.position;
        //PublicVars.spawnedObject.transform.rotation = IndicatorTr.rotation;
        Instantiate(MyDataStruct.spawnedObject, IndicatorTr.position, IndicatorTr.rotation).SetActive(true);
        //MyDataStruct.spawnedObject.SetActive(true);

        // 프리팹 배치 시 파티클
        //Destroy(Instantiate(TouchParticle, hitPose.position, hitPose.rotation), 3);

        makePrefabBtn.onClick.RemoveAllListeners();
        makePrefabBtn.onClick.AddListener(OnClickMakePrefabBtn);
        isMakePrefabBtnClick = false;

        //Debug.Log("PlaceIndicatorPrefab 버튼으로 프리팹 배치 실행");
    }
    #endregion

    #region 원점 설정

    public ARSessionOrigin arOrigin;
    List<ARRaycastHit> originHits = new List<ARRaycastHit>();

    public void PlaceOrigin()
    {
        arRaycaster.Raycast(new Vector2(Screen.width * 0.5f, Screen.height * 0.5f), originHits, TrackableType.Planes);
        if (originHits.Count > 0)
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
        PublicVars.playerPos = agent.transform.position;
        arOrigin.transform.position = PublicVars.playerPos;
        SetMapCenter(PublicVars.playerPos);
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

//public static class PublicVars
public static class PublicVars
{
    public static Vector3 playerPos;

    //public static Dictionary<string, GameObject> spawnedObjectDic;
    //public static GameObject spawnedObject;
    public static Material originMt;
}