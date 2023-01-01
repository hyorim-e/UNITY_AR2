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


    public Text debugText_AR;

    private void Awake()
    {
        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();


        //PublicVars.spawnedObjectDic = new Dictionary<string, GameObject>();

        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            spawnedObject.Add(newObject.name, newObject);
            //PublicVars.spawnedObjectDic.Add(newObject.name, newObject);

            /*if (MyDataStruct.table != null)
            {
                debugText_AR.text = "table != null";
            }*/
        }

        debugText_AR.text = "ImageTracker2";
    }

    private void Start()
    {
        PublicVars.spawnedObject = spawnedObject["TheHost"];
        //PublicVars.spawnedObject.AddComponent("DontDestroyObject");
    }

    private void Update()
    {
        debugText_AR.text = PublicVars.spawnedObject.name;
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
        string referenceImageName = trackedImage.referenceImage.name; // ReferenceImageLibrary에서 설정된 이름 받아옴

        
        spawnedObject[referenceImageName].transform.position = trackedImage.transform.position; // 스폰된 오브젝트(프리팹)의 위치와 트래킹된 이미지의 위치 일치시키기
        spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;

        spawnedObject[referenceImageName].SetActive(true);
        

        /*PublicVars.spawnedObjectDic[referenceImageName].transform.SetPositionAndRotation(trackedImage.transform.position, trackedImage.transform.rotation);

        PublicVars.spawnedObjectDic[referenceImageName].SetActive(true);*/


        PublicVars.spawnedObject = spawnedObject[referenceImageName];
        PublicVars.originMt = PublicVars.spawnedObject.GetComponentInChildren<Renderer>().sharedMaterial;

        //debugText_AR.text = PublicVars.spawnedObject.name;
        debugText_AR.text = "originMt = " + PublicVars.originMt.name;
    }
}