using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QRToggle : MonoBehaviour
{
    Toggle toggle;

    [SerializeField]
    private GameObject ARSessionOrigin_AR;
    [SerializeField]
    private GameObject ARSessionOrigin_QR;
    [SerializeField]
    private GameObject QRTest;

    void Awake()
    {
        toggle = gameObject.GetComponent<Toggle>();

        toggle.onValueChanged.AddListener(toggleChanged);
    }

    void toggleChanged(bool isOn)
    {
        if (isOn) // true¿Ã∏È
        {
            ARSessionOrigin_AR.SetActive(false);
            ARSessionOrigin_QR.SetActive(true);
            //QRTest.SetActive(true);
        }
        else
        {
            ARSessionOrigin_AR.SetActive(true);
            ARSessionOrigin_QR.SetActive(false);
            //QRTest.SetActive(false);
        }
    }
}
