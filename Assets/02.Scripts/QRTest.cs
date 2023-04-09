using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using ZXing;

public class QRTest : MonoBehaviour
{
    private WebCamTexture camTexture;
    private Rect screenRect;

    static string strBarcodeRead;

    void Start()
    {
        strBarcodeRead = null;

        // 카메라 화면 크기 조정 // 기본 값 스크린 너비, 높이
        screenRect = new Rect(0,0, Screen.width, Screen.height);
        camTexture = new WebCamTexture();
        camTexture.requestedHeight = Screen.height;
        camTexture.requestedWidth = Screen.width;

        // 읽어 들이는 웹 캠 텍스쳐 값이 널이 아니면
        if(camTexture != null)
        {
            // 카메라 동작 플레이.
            // 만약 정지시키고 싶다면 -> camTexture.Stop();
            // QR코드 인식 후 씬이 넘어간다면 반드시 Stop을 해주어야 카메라가 꺼진다. 
            camTexture.Play();
        }
    }

    void OnGUI()
    {
        // OnGUI를 통한 화면에 가시화
        // 카메라 화면 크기, 카메라에 쓰일 텍스쳐 값(웹 캠 텍스쳐), 화면에 맞게 그리기
        GUI.DrawTexture(screenRect, camTexture, ScaleMode.ScaleToFit);

        try
        {
            // Decode를 통한 QRcode 읽어들이기.
            IBarcodeReader barcodeReader = new BarcodeReader();

            var result = barcodeReader.Decode(camTexture.GetPixels32(), camTexture.width, camTexture.height);

            // 만약 결과 값이 null이 아니면
            if (result != null)
            {
                // 인식한 QRcode의 텍스트 값을 로그.
                Debug.Log(result.Text);
                strBarcodeRead = result.Text;
            }
        } 
        catch(Exception ex)
        {
            Debug.LogWarning(ex.Message);
        }
    }
}
