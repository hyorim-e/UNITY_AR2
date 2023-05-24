using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class ImageTracker2 : MonoBehaviour
{
    private ARTrackedImageManager trackedImageManager;

    //[HideInInspector]
    //[SerializeField]
    public GameObject[] placeablePrefabs;

    [SerializeField]
    private ParticleSystem particle;

    [HideInInspector]
    public Dictionary<string, GameObject> spawnedObject;

    public Material indicatorMt;

    public Text debugText_AR;

    private void Awake()
    {
        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();

        // 배치할 오리지널 오브젝트
        foreach (GameObject obj in placeablePrefabs)
        {
            spawnedObject.Add(obj.name, obj);
        }

        debugText_AR.text = "ImageTracker2";
    }

    private void OnEnable()
    {
        trackedImageManager.trackedImagesChanged += OnTrackedImageChanged;
    }

    private void OnDisable()
    {
        trackedImageManager.trackedImagesChanged -= OnTrackedImageChanged;
    }

    void OnTrackedImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added) // .added 트래킹되는 이미지가 추가되었을 때
        {
            UpdateSpawnObject(trackedImage);

            #region 파티클
            //InstParticle(trackedImage);
            #endregion

            /*if (trackedImage != null)
            {
                debugText_AR.text = "trackedImage != null";
            }*/
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated) // .updated 트래킹되는 이미지가 변경되었을 때
        {
            UpdateSpawnObject(trackedImage);

            #region 파티클
            /*if (trackedImage.trackingState == TrackingState.Tracking)
            {
                trackedImage.transform.GetChild(0).gameObject.SetActive(true);
            }
            // If the tracked image is lost, deactivate the particle system
            else if (trackedImage.trackingState == TrackingState.None)
            {
                trackedImage.transform.GetChild(0).gameObject.SetActive(false);
            }*/
            #endregion
        }

        foreach (ARTrackedImage trackedImage in eventArgs.removed) // .removed 트래킹되는 이미지가 삭제되었을 때
        {
            spawnedObject[trackedImage.name].SetActive(false);

            #region 파티클 
            //Destroy(trackedImage.transform.GetChild(0).gameObject);
            #endregion
        }
    }

    void UpdateSpawnObject(ARTrackedImage trackedImage)
    {
        string referenceImageName = trackedImage.referenceImage.name; // ReferenceImageLibrary에서 설정된 이름 받아옴

        if (trackedImage.trackingState == TrackingState.Tracking)
        {
            spawnedObject[referenceImageName].transform.position = trackedImage.transform.position; // 스폰된 오브젝트(프리팹)의 위치와 트래킹된 이미지의 위치 일치시키기
            spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;
            spawnedObject[referenceImageName].SetActive(true);

            MyDataStruct.spawnedObject = spawnedObject[referenceImageName];
            MyDataStruct.originMt = MyDataStruct.spawnedObject.GetComponentInChildren<Renderer>().sharedMaterial;
            //debugText_AR.text = "originMt = " + MyDataStruct.originMt.name;
        }
        else
        {
            spawnedObject[referenceImageName].SetActive(false);
        }  
    }

    // 게임 Scene으로 넘어갔을 때 AR Scene에서 보였던 프리팹 숨기는 역할
    // 배치하기 버튼(AR Scene에서 게임 Scene으로 넘어가는 버튼)에 연결
    public void HideSpawnedObject()
    {
        spawnedObject[MyDataStruct.spawnedObject.name].SetActive(false);
    }

    public void SetIndicator()
    {
        foreach(GameObject obj in placeablePrefabs)
        {
            if(obj.name == MyDataStruct.spawnedObject.name)
            {
                MyDataStruct.spawnedObject_Indicator = Instantiate(obj);
                MyDataStruct.spawnedObject_Indicator.name = obj.name;

                // 게임 Scene에서는 축소되어 나와서 스케일 크게 조정함
                MyDataStruct.spawnedObject_Indicator.transform.localScale = new Vector3(3,3,3);

                MyDataStruct.spawnedObject_Indicator.SetActive(false);

                MyDataStruct.spawnedObject_Indicator.GetComponentInChildren<Renderer>().material = indicatorMt;
            }
        }
    }

    private void InstParticle(ARTrackedImage trackedImage)
    {
        Destroy(Instantiate(particle, trackedImage.transform.position, trackedImage.transform.rotation), 3);
        //Instantiate(particle, trackedImage.transform.position, Quaternion.identity)
        particle.transform.position = trackedImage.transform.position;
        particle.transform.rotation = trackedImage.transform.rotation;
    }
}