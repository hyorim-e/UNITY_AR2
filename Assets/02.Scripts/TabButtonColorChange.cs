using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TabButtonColorChange : MonoBehaviour
{
    public Image buttonImage;

    // Start is called before the first frame update
    void Start()
    {
        buttonImage = GetComponent<Image>();
    }

    public void OnButtonClick()
    {
        Color changeColor = new Color32(208, 172, 133, 255);
        
        // ��ư �̹��� ���� ����
        buttonImage.color = changeColor;
    }

    public void OffButtonClick()
    {
        Color defaultColor = new Color32(198, 152, 104, 255);
        
        // ��ư �̹����� ������ ���� �������� ����
        buttonImage.color = defaultColor;
    }
}
