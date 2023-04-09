using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class QRToggle : MonoBehaviour
{
    Toggle toggle;

    public GameObject ARSessionOrigin;
    public GameObject QRTest;

    void Awake()
    {
        toggle = gameObject.GetComponent<Toggle>();

        toggle.onValueChanged.AddListener(toggleChanged);
    }

    void toggleChanged(bool isOn)
    {
        if (toggle.isOn) // true¿Ã∏È
        {
            ARSessionOrigin.SetActive(false);
            QRTest.SetActive(true);
        }
        else
        {
            ARSessionOrigin.SetActive(true);
            QRTest.SetActive(false);
        }
    }
}
