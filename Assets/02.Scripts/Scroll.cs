using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scroll : MonoBehaviour
{
    public RectTransform List;  // ������ ������Ʈ
    public int count;  // �������� ��
    private float pos;  // List�� LocalPosition
    private float movepos;  // ������ ��
    private bool IsScroll = false;  // �������� �ϴ��� �ƴ��� ����

    // Start is called before the first frame update
    void Start()
    {
        pos = List.localPosition.x;
        movepos = List.rect.xMax - List.rect.xMax / count;
    }

    public void Right()
    {
        if(List.rect.xMin + List.rect.xMax / count == movepos)
        {

        }
        else
        {
            IsScroll = true;
            movepos = pos - List.rect.width / count;
            pos = movepos;
            StartCoroutine(scroll());
        }
    }

    public void Left()
    {
        if(List.rect.xMax - List.rect.xMax / count == movepos)
        {

        }
        else
        {
            IsScroll = true;
            movepos = pos + List.rect.width / count;
            pos = movepos;
            StartCoroutine(scroll());
        }
    }

    // �����̴� ��ũ��Ʈ
    IEnumerator scroll()
    {
        while(IsScroll)
        {
            List.localPosition = Vector2.Lerp(List.localPosition, new Vector2(movepos, 0), Time.deltaTime * 5);
            if(Vector2.Distance(List.localPosition, new Vector2(movepos, 0)) < 0.1f)
            {
                IsScroll = false;
            }
            yield return null;
        }
    }
}
