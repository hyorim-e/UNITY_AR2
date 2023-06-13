using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;

public class ReadQRCode : MonoBehaviour
{
    public ARCameraManager CameraManager;
    public Text txt;

    private ImageTracker2 imageTracker2;

    [SerializeField]
    private ObjectPool objectPool_cs;
    //[SerializeField]
    //private GameObject[] spawnPrefabs;

    private void Awake()
    {
        imageTracker2 = GetComponent<ImageTracker2>();
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (CameraManager.TryAcquireLatestCpuImage(out XRCpuImage image))
        {
            using (image)
            {
                var conversionParams = new XRCpuImage.ConversionParams(image, TextureFormat.R8, XRCpuImage.Transformation.MirrorY);
                var dataSize = image.GetConvertedDataSize(conversionParams);
                var grayscalePixels = new byte[dataSize];

                unsafe
                {
                    fixed (void* ptr = grayscalePixels)
                    {
                        image.Convert(conversionParams, new System.IntPtr(ptr), dataSize);
                    }
                }

                IBarcodeReader barcodeReader = new BarcodeReader();
                // result가 QRCode URL
                var result = barcodeReader.Decode(grayscalePixels, image.width, image.height, RGBLuminanceSource.BitmapFormat.Gray8);

                if (result != null)
                {
                    txt.text = result.Text;
                    //SetPrefab();
                }
            }
        }

        /*
        if(imageTracker2.spawnedObject["Cube"].activeSelf == true)
        {
            imageTracker2.spawnedObject["Cube"].transform.position = CameraManager.transform.position + CameraManager.transform.rotation * new Vector3(0, 0, 1);
            imageTracker2.spawnedObject["Cube"].transform.rotation = CameraManager.transform.rotation;
        }
        else if(imageTracker2.spawnedObject["Sphere"].activeSelf == true)
        {
            imageTracker2.spawnedObject["Sphere"].transform.position = CameraManager.transform.position + CameraManager.transform.rotation * new Vector3(0, 0, 1);
            imageTracker2.spawnedObject["Sphere"].transform.rotation = CameraManager.transform.rotation;
        }
        */
    }

    void SetPrefab()
    {
        if (txt.text == "https://www.qrcode.com/ko/index.html") // qr코드 홈페이지
        {
            for (int i = 0; i < objectPool_cs.placeablePrefabs.Length; i++)
            {
                objectPool_cs.placeablePrefabs[i].SetActive(false);
            }
            //spawnPrefabs[0].SetActive(true);
            objectPool_cs.placeablePrefabs[0].SetActive(true);
            //GetComponent<ImageTracker2>().spawnedObject["Cube"].transform.position = CameraManager.transform.position + CameraManager.transform.rotation * new Vector3(0, 0, 1);
            //GetComponent<ImageTracker2>().spawnedObject["Cube"].transform.rotation = CameraManager.transform.rotation;

        }
        else if (txt.text == "http://www.samsungamoled.net/") // 삼성
        {
            for (int i = 0; i < objectPool_cs.placeablePrefabs.Length; i++)
            {
                objectPool_cs.placeablePrefabs[i].SetActive(false);
            }
            //spawnPrefabs[1].SetActive(true);
            objectPool_cs.placeablePrefabs[1].SetActive(true);
            //GetComponent<ImageTracker2>().spawnedObject["Sphere"].transform.position = CameraManager.transform.position + CameraManager.transform.rotation * new Vector3(0, 0, 1);
            //GetComponent<ImageTracker2>().spawnedObject["Sphere"].transform.rotation = CameraManager.transform.rotation;
        }
    }

    public void HideSpawnedObject_QR()
    {
        for(int i = 0; i < objectPool_cs.placeablePrefabs.Length; i++)
        {
            objectPool_cs.placeablePrefabs[i].SetActive(false);
        }
    }
}