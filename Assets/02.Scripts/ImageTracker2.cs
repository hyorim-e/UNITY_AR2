using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class ImageTracker2 : MonoBehaviour
{
    private ARTrackedImageManager trackedImageManager;

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnedObject;

    public Material indicatorMt;

    private string referenceImageName;

    public Text debugText_AR;

    private void Awake()
    {
        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();
        MyDataStruct.indicatorList = new Dictionary<string, GameObject>();

        // 배치할 오리지널 오브젝트
        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);
            
            spawnedObject.Add(newObject.name, newObject);
        }

        // 배치 시 미리보기 될 오브젝트
        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            MyDataStruct.indicatorList.Add(newObject.name, newObject);
        }

        // 인디케이터 리스트 모두 돌면서 머터리얼 변경
        foreach (KeyValuePair<string, GameObject> data in MyDataStruct.indicatorList)
        {
            data.Value.GetComponentInChildren<Renderer>().material = indicatorMt;
        }

        debugText_AR.text = "ImageTracker2";
    }

    private void Start()
    {

    }

    private void Update()
    {
        //debugText_AR.text = MyDataStruct.spawnedObject.name;
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

            /*if (trackedImage != null)
            {
                debugText_AR.text = "trackedImage != null";
            }*/
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated) // .updated 트래킹되는 이미지가 변경되었을 때
        {
            UpdateSpawnObject(trackedImage);
        }

        foreach (ARTrackedImage trackedImage in eventArgs.removed) // .removed 트래킹되는 이미지가 삭제되었을 때
        {
            spawnedObject[trackedImage.name].SetActive(false);
            //PublicVars.spawnedObjectDic[trackedImage.name].SetActive(false);
        }
    }

    void UpdateSpawnObject(ARTrackedImage trackedImage)
    {
        //string referenceImageName = trackedImage.referenceImage.name; // ReferenceImageLibrary에서 설정된 이름 받아옴
        referenceImageName = trackedImage.referenceImage.name;

        spawnedObject[referenceImageName].transform.position = trackedImage.transform.position; // 스폰된 오브젝트(프리팹)의 위치와 트래킹된 이미지의 위치 일치시키기
        spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;

        spawnedObject[referenceImageName].SetActive(true);


        /*PublicVars.spawnedObjectDic[referenceImageName].transform.SetPositionAndRotation(trackedImage.transform.position, trackedImage.transform.rotation);

        PublicVars.spawnedObjectDic[referenceImageName].SetActive(true);*/


        MyDataStruct.spawnedObject = spawnedObject[referenceImageName];
        MyDataStruct.originMt = MyDataStruct.spawnedObject.GetComponentInChildren<Renderer>().material;
        
        debugText_AR.text = "originMt = " + MyDataStruct.originMt.name;
    }

    public void RemoveSpawnedObject()
    {
        spawnedObject[MyDataStruct.spawnedObject.name].SetActive(false);
    }

    public void SetIndicator()
    {
        foreach (KeyValuePair<string, GameObject> data in MyDataStruct.indicatorList)
        {
            if (data.Key == MyDataStruct.spawnedObject.name)
            {
                MyDataStruct.spawnedObject_Indicator = data.Value;
                MyDataStruct.spawnedObject_Indicator.name = data.Key;
                MyDataStruct.spawnedObject_Indicator.SetActive(false);

                //MyDataStruct.spawnedObject_Indicator.GetComponentInChildren<Renderer>().material = indicatorMt;
            }
        }
    }
}