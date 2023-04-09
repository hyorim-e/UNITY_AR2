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
    }
}
