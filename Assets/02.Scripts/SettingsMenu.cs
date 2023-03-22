using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;


public class SettingsMenu : MonoBehaviour
{
    [Header("space between menu items")]
    [SerializeField] Vector2 spacing;

    [Space]
    [Header("main button rotation")]
    [SerializeField] float rotationDuration;
    [SerializeField] Ease rotationEase;

    [Space]
    [Header("Animation")]
    [SerializeField] float expandDuration;
    [SerializeField] float collapseDuration;
    [SerializeField] Ease expandEase;
    [SerializeField] Ease collapseEase;

    [Space]
    [Header("Fading")]
    [SerializeField] float expandFadeDuration;
    [SerializeField] float collapseFadeDuration;

    Button mainButton;
    SettingsMenuItem[] menuItems;
    bool isExpanded = false;

    Vector2 mainButtonPosition;
    int itemsCount;


    void Start()
    {
        itemsCount = transform.childCount - 1;
        menuItems = new SettingsMenuItem[itemsCount];
        for (int i = 0; i < itemsCount; i++)
        {
            menuItems[i] = transform.GetChild(i + 1).GetComponent<SettingsMenuItem>();
        }

        mainButton = transform.GetChild(0).GetComponent<Button>();
        mainButton.onClick.AddListener(ToggleMenu);
        mainButton.transform.SetAsLastSibling();

        mainButtonPosition = mainButton.transform.position;

        ResetPositions();
    }

    void ResetPositions()
    {
        for (int i = 0; i < itemsCount; i++)
        {
            menuItems[i].trans.position = mainButtonPosition;
        }
    }

    //[ContextMenu] 또는 [ExecuteInEditMode] ([SerializeField]는 변수용)
    [ExecuteInEditMode]
    public void ToggleMenu()
    {
        isExpanded = !isExpanded;

        // menu opened
        if (isExpanded)
        {

            for (int i = 0; i < itemsCount; i++)
            {
                // menuItems[i].trans.position = mainButtonPosition + spacing * (i + 1);
                menuItems[i].trans.DOMove(mainButtonPosition + spacing * (i + 1), expandDuration).SetEase(expandEase);
                menuItems[i].img.DOFade(1f, expandFadeDuration).From(0f);
            }
        }

        // menu closed
        else
        {
            for (int i = 0; i < itemsCount; i++)
            {
                // menuItems[i].trans.position = mainButtonPosition;
                menuItems[i].trans.DOMove(mainButtonPosition, collapseDuration).SetEase(collapseEase);
                menuItems[i].img.DOFade(0f, collapseFadeDuration);
            }
        }

        // rotation main button
        /*  mainButton.transform
              .DORotate(Vector3.forward * 180f, rotationDuration)
              .From(Vector3.zero)
              .SetEase(rotationEase);
        */
    }

    public void OnItemClick(int index)
    {
        // Debug.Log("item" + index + "clicked");
        switch (index)
        {
            case 0: // first button
                Debug.Log("컬렉션북");
                break;

            case 1: // second button
                Debug.Log("보관함");
                break;
        
            case 2: // third button
                Debug.Log("설정");
                break;
        
        }
    }

    void OnDestroy()
    {
        mainButton.onClick.RemoveListener(ToggleMenu);
    }
}
