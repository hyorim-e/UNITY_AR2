using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
using TMPro;

public class ImageTracker2 : MonoBehaviour
{
    private ARTrackedImageManager trackedImageManager;

    public ObjectPool objectPool_cs;

    //[HideInInspector]
    //[SerializeField]
    public GameObject[] placeablePrefabs;
    [HideInInspector]
    public Dictionary<string, GameObject> spawnedObject;

    [SerializeField]
    private ParticleSystem particle;

    public Material indicatorMt;

    //private Vector3 temp;

    [SerializeField]
    private TMP_Text debugTxt;

    private void Awake()
    {
        if (MyDataStruct.spawnedObject is null)
            debugTxt.text = "null";
        else if (MyDataStruct.spawnedObject is not null)
            debugTxt.text = "not null";
        else
            debugTxt.text = "MyDataStruct.spawnedObject.name";
        Debug.Log($"MyDataStruct.spawnedObject.ToString() = {MyDataStruct.spawnedObject}");

        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();

        // 배치할 오리지널 오브젝트
        //foreach (GameObject obj in placeablePrefabs)
        foreach (GameObject obj in objectPool_cs.placeablePrefabs)
        {
            spawnedObject.Add(obj.name, obj);
        }
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
            //temp = spawnedObject[referenceImageName].transform.localScale;
            //spawnedObject[referenceImageName].transform.localScale = new Vector3(1, 1, 1);
            spawnedObject[referenceImageName].SetActive(true);

            MyDataStruct.spawnedObject = spawnedObject[referenceImageName];
            MyDataStruct.originMt = MyDataStruct.spawnedObject.GetComponentInChildren<Renderer>().sharedMaterial;
            //debugText_AR.text = "originMt = " + MyDataStruct.originMt.name;
        }
        else
        {
            spawnedObject[referenceImageName].SetActive(false);
        }

        debugTxt.text = MyDataStruct.spawnedObject.name;
    }

    // 게임 Scene으로 넘어갔을 때 AR Scene에서 보였던 프리팹 숨기는 역할
    // 배치하기 버튼(AR Scene에서 게임 Scene으로 넘어가는 버튼)에 연결
    public void HideSpawnedObject()
    {
        //spawnedObject[MyDataStruct.spawnedObject.name].transform.localScale = temp;
        spawnedObject[MyDataStruct.spawnedObject.name].SetActive(false);
    }

    public void SetIndicator()
    {
        //foreach(GameObject obj in placeablePrefabs)
        foreach(GameObject obj in objectPool_cs.placeablePrefabs)
        {
            if(obj.name == MyDataStruct.spawnedObject.name)
            {
                MyDataStruct.spawnedObject_Indicator = Instantiate(obj);
                MyDataStruct.spawnedObject_Indicator.name = obj.name;

                // 게임 Scene에서는 축소되어 나와서 스케일 크게 조정함
                MyDataStruct.spawnedObject_Indicator.transform.localScale = new Vector3(3, 3, 3);
                MyDataStruct.spawnedObject.transform.localScale = new Vector3(3, 3, 3);

                MyDataStruct.spawnedObject_Indicator.SetActive(false);

                //MyDataStruct.spawnedObject_Indicator.GetComponentInChildren<Renderer>().material = indicatorMt;
                void FindComponentsInChildren(Transform parent)
                {
                    Renderer rendererComponent = parent.GetComponentInChildren<Renderer>();

                    if (rendererComponent != null)
                    {
                        rendererComponent.material = indicatorMt;
                        // 원하는 작업 수행
                    }

                    // 하위 오브젝트를 재귀적으로 탐색하여 컴포넌트를 찾음
                    for (int i = 0; i < parent.childCount; i++)
                    {
                        Transform child = parent.GetChild(i);
                        FindComponentsInChildren(child); // 재귀 호출
                    }
                }
                FindComponentsInChildren(MyDataStruct.spawnedObject_Indicator.transform);
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