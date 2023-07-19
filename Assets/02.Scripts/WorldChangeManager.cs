using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WorldChangeManager : MonoBehaviour
{
    [SerializeField]
    private ARManager2 script;

    [SerializeField]
    private GameObject plane;
    private Renderer planeRdr;

    [SerializeField]
    private Texture2D[] newTexture;

    [SerializeField]
    private GameObject zootopiaDeco;
    [SerializeField]
    private GameObject seaDeco;


    private void Awake()
    {
        planeRdr = plane.GetComponent<Renderer>();
    }

    public void ChangeToZootopia()
    {
        planeRdr.material.SetTexture("_SampleTexture2D_89d09432f7d14dc8981b3202a80dcf69_Texture_1", newTexture[0]);

        zootopiaDeco.SetActive(true);
        seaDeco.SetActive(false);
    }

    public void ChangeToSea()
    {
        planeRdr.material.SetTexture("_SampleTexture2D_89d09432f7d14dc8981b3202a80dcf69_Texture_1", newTexture[1]);

        seaDeco.SetActive(true);
        zootopiaDeco.SetActive(false);
    }
}
