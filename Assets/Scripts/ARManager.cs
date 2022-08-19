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
        //PlacePrefab();
        PlaceIndicator();
    }


    #region 바닥 활성화

    public ARPlaneManager arPlane;

    public void ShowPlane(bool b)
    {
        foreach (var plane in arPlane.trackables)
            plane.gameObject.SetActive(b);
    }

    #endregion

    #region 바닥 표시기

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
}
