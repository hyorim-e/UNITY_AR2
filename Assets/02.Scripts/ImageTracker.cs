using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class ImageTracker : MonoBehaviour
{
    public Text debugText_AR;
    private ARTrackedImageManager trackedImageManager;

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnedObject;

    public GameObject MyDataStruct_obj;

    private void Awake()
    {

        trackedImageManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();
        //MyDataStruct.table = new Dictionary<string, GameObject>();

        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            spawnedObject.Add(newObject.name, newObject);
            MyDataStruct.table.Add(newObject.name, newObject);
            //MyDataStruct.PrefabList.Add(Instantiate(obj));

            if (MyDataStruct.table != null)
            {
                debugText_AR.text = "table != null";
            }

            //prefabsNumDict.Add(spawnedObject, prefabNum);
            //PlayerPrefs.SetInt(newObject.name, prefabNum);
            //PlayerPrefs.SetString(prefabNum.ToString(), newObject.name);
            // SetString(string key, string value);
            // SetInt(string key, int value);
            // key = 프리팹(이미지) 이름, value = 번호 

        }

        //foreach (KeyValuePair<Dictionary<string, GameObject>, int> data in prefabsNumDict)
        //{
        //    
        //}
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

            if (trackedImage != null)
            {
                //debugText_AR.text = "trackedImage != null";
            }
            /*
            MyDataStruct.RecognizePrefab.name = trackedImage.name;

            if (MyDataStruct.RecognizePrefab)
            {
                foreach (GameObject prefab in MyDataStruct.PrefabList)
                    MyDataStruct.table.Add(prefab.name, prefab);

                MyDataStruct_obj.GetComponent<MyDataStruct>().SetPrefab(MyDataStruct_obj.GetComponent<MyDataStruct>().GetName(MyDataStruct.RecognizePrefab));

            }*/
        }

        foreach (ARTrackedImage trackedImage in eventArgs.updated) // .updated 트래킹되는 이미지가 변경되었을 때
        {
            UpdateSpawnObject(trackedImage);
        }

        foreach (ARTrackedImage trackedImage in eventArgs.removed) // .removed 트래킹되는 이미지가 삭제되었을 때
        {
            spawnedObject[trackedImage.referenceImage.name].SetActive(false);
        }
    }

    void UpdateSpawnObject(ARTrackedImage trackedImage)
    {
        string referenceImageName = trackedImage.referenceImage.name; // ReferenceImageLibrary에서 설정된 이름 받아옴

        spawnedObject[referenceImageName].transform.position = trackedImage.transform.position; // 스폰된 오브젝트(프리팹)의 위치와 트래킹된 이미지의 위치 일치시키기
        spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;

        spawnedObject[referenceImageName].SetActive(true);

        MyDataStruct.RecognizePrefabName = referenceImageName;
        MyDataStruct_obj.GetComponent<MyDataStruct>().GetName();
        MyDataStruct_obj.GetComponent<MyDataStruct>().SetPrefab();

    }

    private void Update()
    {
        
    }
}
