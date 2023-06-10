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

    // �ش� �Լ��� �̹��� �ν� ���� ��ġ�ϱ� ��ư�� ����
    public void CollectionOpen()
    {
        if (MyDataStruct.spawnedObject.name == "TheHost")
        {
            txt = graphic.GetChild(0).GetComponent<Text>(); // �׷��� �̸� ��ġ �޾ƿ�
            image = graphic.GetChild(1).GetComponent<Image>(); // �׷��� �̹��� ��ġ �޾ƿ�

            txt.text = "Monster"; // �׷��� �̸� ����
            image.color = Color.white; // �׷��� �̹��� �÷� white�� �����Ͽ� ���������� �̹����� ���̵��� ����
        }
    }
}
