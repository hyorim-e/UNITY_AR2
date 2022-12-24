using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARManager2 : MonoBehaviour
{
    public Text debugText_Game;

    public ARRaycastManager arRaycaster;

    private Animator animator;
    public GameObject character;

    public GameObject indicator;
    private Transform IndicatorTr;
    public Material[] material;

    public Button makePrefabBtn;
    public Button PosterRecognizeBtn;
    private bool isMakePrefabBtnClick;

    public GameObject TouchParticle;

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

        debugText_Game.text = "text";
    }

    #region 배치 미리보기 진입
    public void OnClickMakePrefabBtn()
    {
        isMakePrefabBtnClick = true;
        indicator.SetActive(true);
        makePrefabBtn.onClick.AddListener(PlaceIndicatorPrefab);
    }
    #endregion

    #region 배치 미리보기 (바닥 표시기(인디케이터))

    List<ARRaycastHit> indicatorHits = new List<ARRaycastHit>();

    void PlaceIndicator()
    {
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

        PublicVars.spawnedObject.GetComponentInChildren<Renderer>().sharedMaterial = material[1];

        Pose hitPose = indicatorHits[0].pose;
        Instantiate(PublicVars.spawnedObject, hitPose.position, hitPose.rotation);

        // 프리팹 배치 시 파티클
        Destroy(Instantiate(TouchParticle, hitPose.position, hitPose.rotation), 3);

        makePrefabBtn.onClick.RemoveAllListeners();
        makePrefabBtn.onClick.AddListener(OnClickMakePrefabBtn);
        isMakePrefabBtnClick = false;
    }
    #endregion
}

/*public static class PublicVars
{
    public static Vector3 playerPos;

    public static Dictionary<string, GameObject> spawnedObjectDic;
    public static GameObject spawnedObject;
}*/