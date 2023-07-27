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
        
        // 버튼 이미지 색상 변경
        buttonImage.color = changeColor;
    }

    public void OffButtonClick()
    {
        Color defaultColor = new Color32(198, 152, 104, 255);
        
        // 버튼 이미지의 색상을 기존 색상으로 변경
        buttonImage.color = defaultColor;
    }
}
