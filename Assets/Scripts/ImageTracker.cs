using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;

public static class MoviePrefab
{
    public static GameObject moviePrefab;
}
public class ImageTracker : MonoBehaviour
{
    private ARTrackedImageManager TIManager;

    [SerializeField]
    private GameObject[] placeablePrefabs;

    private Dictionary<string, GameObject> spawnedObject;

    private void Awake()
    {
        TIManager = GetComponent<ARTrackedImageManager>();
        spawnedObject = new Dictionary<string, GameObject>();

        foreach (GameObject obj in placeablePrefabs)
        {
            GameObject newObject = Instantiate(obj);
            newObject.name = obj.name;
            newObject.SetActive(false);

            MoviePrefab.moviePrefab = newObject; //

            spawnedObject.Add(newObject.name, newObject);
        }
    }

    private void OnEnable()
    {
        TIManager.trackedImagesChanged += OnTrackedImageChanged;
    }

    private void OnDisable()
    {
        TIManager.trackedImagesChanged -= OnTrackedImageChanged;
    }

    void OnTrackedImageChanged(ARTrackedImagesChangedEventArgs eventArgs)
    {
        foreach (ARTrackedImage trackedImage in eventArgs.added) // .added 트래킹되는 이미지가 추가되었을 때
        {
            UpdateSpawnObject(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.updated) // .updated 트래킹되는 이미지가 변경되었을 때
        {
            UpdateSpawnObject(trackedImage);
        }
        foreach (ARTrackedImage trackedImage in eventArgs.removed) // .removed 트래킹되는 이미지가 삭제되었을 때
        {
            spawnedObject[trackedImage.name].SetActive(false);
        }
    }

    void UpdateSpawnObject(ARTrackedImage trackedImage)
    {
        string referenceImageName = trackedImage.referenceImage.name; // ReferenceImageLibrary에서 설정된 이름 받아옴

        spawnedObject[referenceImageName].transform.position = trackedImage.transform.position; // 스폰된 오브젝트(프리팹)의 위치와 트래킹된 이미지의 위치 일치시키기
        spawnedObject[referenceImageName].transform.rotation = trackedImage.transform.rotation;

        spawnedObject[referenceImageName].SetActive(true);
    }
}
