using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CollectionBookManager : MonoBehaviour
{
    [SerializeField]
    private Transform graphic;

    private Text txt;
    private Image image;

    // 해당 함수를 이미지 인식 씬의 배치하기 버튼에 연결
    public void CollectionOpen()
    {
        if (MyDataStruct.spawnedObject.name == "TheHost")
        {
            txt = graphic.GetChild(0).GetComponent<Text>(); // 그래픽 이름 위치 받아옴
            image = graphic.GetChild(1).GetComponent<Image>(); // 그래픽 이미지 위치 받아옴

            txt.text = "Monster"; // 그래픽 이름 변경
            image.color = Color.white; // 그래픽 이미지 컬러 white로 변경하여 검정색에서 이미지가 보이도록 변경
        }
    }
}
