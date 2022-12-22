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

    #region 클릭으로 바닥에 프리팹 놓기

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
        //indicator.SetActive(false); // 하이어라키에서 비활성화해놔서 필요 없을듯
        indicator = Instantiate(indicator);
        IndicatorTr = indicator.transform;
        indicator.SetActive(false);
    }

    void Update()
    {
        //Debug.Log("indicatorRdr =" + indicatorRdr);
        //PlacePrefab(); // 화면 터치 시 공 생성
        if (isMakePrefabBtnClick)
        {
            PlaceIndicator(); // 버튼 터치 시 표시되는 인디케이터 부분에 공 생성
        }
        PlayerMove();

        debugText_Game.text = "table == null";
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
        isMakePrefabBtnClick = true;
        indicator.SetActive(true);
        makePrefabBtn.onClick.AddListener(PlaceIndicatorPrefab);
    }
    #endregion

    #region 배치 미리보기 (바닥 표시기(인디케이터))

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

    #region 버튼으로 프리팹 배치
    public void PlaceIndicatorPrefab()
    {
        indicator.SetActive(false);

        //indicatorRdr.material.color = new Color(1, 1, 1, 0.5f); // 4번째 인자 값 변경하여 투명도 조절 (2D 방식)

        spawnPrefab.GetComponentInChildren<Renderer>().sharedMaterial = material[1];

        Pose hitPose = indicatorHits[0].pose;
        Instantiate(spawnPrefab, hitPose.position, hitPose.rotation);

        // 프리팹 배치 시 파티클
        Destroy(Instantiate(TouchParticle, hitPose.position, hitPose.rotation), 3);

        makePrefabBtn.onClick.RemoveAllListeners();
        makePrefabBtn.onClick.AddListener(OnClickMakePrefabBtn);
        isMakePrefabBtnClick = false;

        //makePrefabBtn.interactable = false;
        //PosterRecognizeBtn.interactable = true;

        //Debug.Log("배치완료");
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

    #region 인식하기 버튼 클릭 시 씬 변경
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