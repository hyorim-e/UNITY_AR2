using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.AI;
using UnityEngine.SceneManagement;
using System;

public class EditManager : MonoBehaviour
{

        public ARRaycastManager arRaycaster;
        public GameObject spawnPrefab;

        private Animator animator;
        public GameObject character;

        //private Renderer indicatorRdr;
        public GameObject indicator;
        private Transform IndicatorTr;
        public Material[] material;

        public Button makePrefabBtn;
        public Button ItemBtn;
        private bool isMakePrefabBtnClick;

        #region Ŭ������ �ٴڿ� ������ ����

        List<ARRaycastHit> hits = new List<ARRaycastHit>();

        public void PlacePrefab()
        {
            if (Input.touchCount == 0) return;

            Touch touch = Input.GetTouch(0);
            if (touch.phase != TouchPhase.Began) return;

            if (arRaycaster.Raycast(touch.position, hits, TrackableType.Planes))
            {
                Pose hitPose = hits[0].pose;
                Instantiate(spawnPrefab, hitPose.position, hitPose.rotation);
            }
        }

        #endregion

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
            //Destroy(Instantiate(TouchParticle, hitPose.position, hitPose.rotation), 3);

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
        if (originHits.Count > 0)
        {
            Pose hitpose = originHits[0].pose;

            // ��ȣ �ȿ� ���� ���� ������ ��
            arOrigin.MakeContentAppearAt(arOrigin.transform, hitpose.position, hitpose.rotation);
        }
    }
    #endregion
}

