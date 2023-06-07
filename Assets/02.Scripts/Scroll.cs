using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Scroll : MonoBehaviour
{
    public RectTransform List;  // 움직일 오브젝트
    public int count;  // 나눠야할 값
    private float pos;  // List의 LocalPosition
    private float movepos;  // 움직일 값
    private bool IsScroll = false;  // 움직여야 하는지 아닌지 구별

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

    // 움직이는 스크립트
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
