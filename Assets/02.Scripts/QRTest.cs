using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.UI;
using System.Runtime.InteropServices;

public class QRTest : MonoBehaviour
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
                IntPtr ptr = IntPtr.Zero;
                try
                {
                    var conversionParams = new XRCpuImage.ConversionParams(image, TextureFormat.R8, XRCpuImage.Transformation.MirrorY);
                    var dataSize = image.GetConvertedDataSize(conversionParams);
                    var grayscalePixels = new byte[dataSize];
                    ptr = Marshal.AllocHGlobal(dataSize);
                    image.Convert(conversionParams, ptr, dataSize);
                    Marshal.Copy(ptr, grayscalePixels, 0, dataSize);

                    IBarcodeReader barcodeReader = new BarcodeReader();
                    var result = barcodeReader.Decode(grayscalePixels, image.width, image.height, RGBLuminanceSource.BitmapFormat.Gray8);

                    if (result != null)
                    {
                        txt.text = result.Text;
                    }
                }
                finally
                {
                    if (ptr != IntPtr.Zero)
                    {
                        Marshal.FreeHGlobal(ptr);
                    }
                }
                /*var conversionParams = new XRCpuImage.ConversionParams(image, TextureFormat.R8, XRCpuImage.Transformation.MirrorY);
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
                var result = barcodeReader.Decode(grayscalePixels, image.width, image.height, RGBLuminanceSource.BitmapFormat.Gray8);

                if (result != null)
                {
                    txt.text = result.Text;
                }*/
            }
        }
    }
    /*private WebCamTexture camTexture;
    private Rect screenRect;

    static string strBarcodeRead;

    void Start()
    {
        strBarcodeRead = null;

        // ī�޶� ȭ�� ũ�� ���� // �⺻ �� ��ũ�� �ʺ�, ����
        screenRect = new Rect(0,0, Screen.width, Screen.height);
        camTexture = new WebCamTexture();
        camTexture.requestedHeight = Screen.height;
        camTexture.requestedWidth = Screen.width;

        // �о� ���̴� �� ķ �ؽ��� ���� ���� �ƴϸ�
        if(camTexture != null)
        {
            // ī�޶� ���� �÷���.
            // ���� ������Ű�� �ʹٸ� -> camTexture.Stop();
            // QR�ڵ� �ν� �� ���� �Ѿ�ٸ� �ݵ�� Stop�� ���־�� ī�޶� ������. 
            camTexture.Play();
        }
    }

    void OnGUI()
    {
        // OnGUI�� ���� ȭ�鿡 ����ȭ
        // ī�޶� ȭ�� ũ��, ī�޶� ���� �ؽ��� ��(�� ķ �ؽ���), ȭ�鿡 �°� �׸���
        GUI.DrawTexture(screenRect, camTexture, ScaleMode.ScaleToFit);

        try
        {
            // Decode�� ���� QRcode �о���̱�.
            IBarcodeReader barcodeReader = new BarcodeReader();

            var result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width, camTexture.height);

            // ���� ��� ���� null�� �ƴϸ�
            if (result != null)
            {
                // �ν��� QRcode�� �ؽ�Ʈ ���� �α�.
                Debug.Log(result.Text);
                strBarcodeRead = result.Text;
            }
        } 
        catch(Exception ex)
        {
            Debug.LogWarning(ex.Message);
        }
    }*/
}
