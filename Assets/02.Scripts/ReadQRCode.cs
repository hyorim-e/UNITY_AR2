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
                    SetPrefab();
                }
            }
        }

        if (GetComponent<ImageTracker2>().spawnedObject["Cube"].activeSelf == true)
        {
            GetComponent<ImageTracker2>().spawnedObject["Cube"].transform.position = CameraManager.transform.position + new Vector3(0, 0, 1);
            GetComponent<ImageTracker2>().spawnedObject["Cube"].transform.rotation = CameraManager.transform.rotation;
        }
    }

    void SetPrefab()
    {
        //GetComponent<QRCodeTracker>().enabled = true;

        /*if (txt.text == "https://www.qrcode.com/ko/index.html") // qr코드 홈페이지
        {
            GetComponent<ImageTracker2>().spawnedObject["Cube"].SetActive(true);
            GetComponent<ImageTracker2>().spawnedObject["Sphere"].transform.position = CameraManager.transform.position + new Vector3(0, 0, 1);
            GetComponent<ImageTracker2>().spawnedObject["Sphere"].transform.rotation = CameraManager.transform.rotation;

        }
        else if (txt.text == "http://www.samsungamoled.net/") // 삼성
        {
            GetComponent<ImageTracker2>().spawnedObject["Sphere"].SetActive(true);
            GetComponent<ImageTracker2>().spawnedObject["Sphere"].transform.position = CameraManager.transform.position + new Vector3(0, 0, 1);
            GetComponent<ImageTracker2>().spawnedObject["Sphere"].transform.rotation = CameraManager.transform.rotation;
        }*/
    }
}
