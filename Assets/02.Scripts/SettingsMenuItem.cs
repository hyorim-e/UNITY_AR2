using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingsMenuItem : MonoBehaviour
{
    [HideInInspector] public Image img;
    [HideInInspector] public Transform trans;
    [HideInInspector] public Text txt;

    SettingsMenu settingsMenu;
    Button button;
    int index;


    void Awake()
    {
        img = GetComponent<Image>();
        txt = GetComponentInChildren<Text>();
        trans = transform;

        settingsMenu = trans.parent.GetComponent<SettingsMenu>();
        index = trans.GetSiblingIndex() - 1;

        button = GetComponent<Button>();
        button.onClick.AddListener(OnItemClick);

        Debug.Log(txt.name);
    }

    void OnItemClick()
    {
        settingsMenu.OnItemClick(index);
    }

    void OnDestroy()
    {
        button.onClick.RemoveListener(OnItemClick);
    }
}
