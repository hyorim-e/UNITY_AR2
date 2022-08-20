using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARManager : MonoBehaviour
{
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


    #region 플레이어를 중심으로 이동

    public GameObject TouchParticle;

    public void MoveTarget()
    {
        if(Physics.Raycast(Camera.main.transform.position, Camera.main.transform.forward, out RaycastHit hit))
        {
            //agent.SetDestination(hit.point);
            Destroy(Instantiate(TouchParticle, hit.point, Quaternion.identity), 3);
        }
    }

    #endregion


    void Update()
    {
        //PlacePrefab(); // 화면 터치 시 공 생성
        PlaceIndicator(); // 버튼 터치 시 표시되는 인디케이터 부분에 공 생성
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
}
