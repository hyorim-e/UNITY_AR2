using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

public class ARManager : MonoBehaviour
{
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


    #region �÷��̾ �߽����� �̵�

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
        PlacePrefab();
    }


    #region �ٴ� Ȱ��ȭ

    public ARPlaneManager arPlane;

    public void ShowPlane(bool b)
    {
        foreach (var plane in arPlane.trackables)
            plane.gameObject.SetActive(b);
    }

    #endregion
}
