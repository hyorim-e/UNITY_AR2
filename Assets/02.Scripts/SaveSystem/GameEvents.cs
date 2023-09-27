using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameEvents : MonoBehaviour
{
    public static GameEvents current;

    private void Awake()
    {
        current = this;
    }

    public event Action onLoadEvent;

    public void dispatchOnLoadEvent()
    {
        if (onLoadEvent != null)
        {
            onLoadEvent();
        }
    }
}
