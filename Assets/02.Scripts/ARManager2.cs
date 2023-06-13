using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.AI;
using TMPro;

public class ARManager2 : MonoBehaviour
{
    public ARRaycastManager arRaycaster;

    private Animator animator;
    public GameObject character;

    public NavMeshAgent agent;
    public GameObject TouchParticle;

    private GameObject indicator;
    private Transform IndicatorTr;
    public Material[] material;

    public Button placePrefabBtn;
    public Button PosterRecognizeBtn;
    [HideInInspector]
    public bool isMakePrefabBtnClick;

    public Text debugText_Game;

    private void Awake()
    {
        animator = character.GetComponent<Animator>();
        /*
        indicator = Instantiate(indicator);
        IndicatorTr = indicator.transform;
        indicator.SetActive(false);
        */

        isMakePrefabBtnClick = false;

        debugText_Game.text = $"MyDataStruct.spawnedObject = {MyDataStruct.spawnedObject}";
    }

    private void Start()
    {
        SetMapRadius(40f);

        //StartCoroutine(PlaceCoroutine());
    }

    void Update()
    {
        //PlacePrefab(); // 화면 터치 시 공 생성
        if (isMakePrefabBtnClick)
        {
            PlaceIndicator(); // 버튼 터치 시 표시되는 인디케이터 부분에 공 생성
        } // 코루틴으로 변경
        PlayerMove();
    }

    #region 배치 코루틴
    IEnumerator PlaceCoroutine()
    {
        while (true)
        {
            Debug.Log("coroutine is running");
            if (isMakePrefabBtnClick)
            {
                PlaceIndicator();
            }

            yield return null; // 한 프레임 대기

            // 필요한 경우에 따라 다른 대기 시간을 사용하려면 아래와 같이 WaitForSeconds 함수를 사용할 수 있습니다:
            // yield return new WaitForSeconds(0.5f); // 0.5초 대기

            // 필요한 경우에 따라 다른 조건으로 대기할 수도 있습니다:
            // yield return new WaitUntil(() => condition); // 조건이 참이 될 때까지 대기
            // yield return new WaitWhile(() => condition); // 조건이 거짓이 될 때까지 대기
        }
    }
    #endregion

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
        //indicator = MyDataStruct.spawnedObject_Indicator;
        //IndicatorTr = indicator.transform;

        isMakePrefabBtnClick = true;
        MyDataStruct.spawnedObject_Indicator.SetActive(true);
        //indicator.SetActive(true);
 
        placePrefabBtn.onClick.AddListener(PlaceIndicatorPrefab);
        placePrefabBtn.onClick.RemoveListener(OnClickMakePrefabBtn);

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
            MyDataStruct.spawnedObject_Indicator.transform.position = indicatorHits[0].pose.position;
            MyDataStruct.spawnedObject_Indicator.transform.rotation = indicatorHits[0].pose.rotation;
            //IndicatorTr.position = indicatorHits[0].pose.position;
            //IndicatorTr.rotation = indicatorHits[0].pose.rotation;
        }
    }
    #endregion

    #region 버튼으로 프리팹 배치
    public void PlaceIndicatorPrefab()
    {
        MyDataStruct.spawnedObject_Indicator.SetActive(false);

        Pose hitPose = indicatorHits[0].pose;

        GameObject obj = Instantiate(MyDataStruct.spawnedObject, hitPose.position, hitPose.rotation);
        // 인디케이터 사이즈와 맞춤
        //obj.transform.localScale = new Vector3(3, 3, 3);
        obj.SetActive(true);
        //Instantiate(MyDataStruct.spawnedObject, IndicatorTr.position, IndicatorTr.rotation).SetActive(true); // 유니티 에디터 내 Play 테스트용
        //MyDataStruct.spawnedObject.SetActive(true);

        // 프리팹 배치 시 파티클
        Destroy(Instantiate(TouchParticle, hitPose.position, hitPose.rotation), 3);

        isMakePrefabBtnClick = false;

        placePrefabBtn.onClick.AddListener(OnClickMakePrefabBtn);
        placePrefabBtn.onClick.RemoveListener(PlaceIndicatorPrefab);     

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
      /*  if (Input.touchCount == 0) return;

        bool isAlived = Vector3.Distance(arOrigin.transform.position, agent.transform.position) <= 0.1f;
        if (isAlived) animator.SetBool("Touch", false); */

        if (Physics.Raycast(Camera.main.transform.position, Camera.main.transform.forward, out RaycastHit hit))
        {
           // animator.SetBool("Touch", true);

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

    //void Start() => SetMapRadius(40f);
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
    //public static Material originMt;
}