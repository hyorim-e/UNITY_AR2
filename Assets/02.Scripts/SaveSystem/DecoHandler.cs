using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DecoHandler : MonoBehaviour
{
    public DecoType decoType;

    public DecoData decoData;

    public void Start()
    {
        if (string.IsNullOrEmpty(decoData.id))
        {
            decoData.id = System.DateTime.Now.ToLongDateString() + System.DateTime.Now.ToLongTimeString() + Random.Range(0, int.MaxValue).ToString();
            decoData.decoType = decoType;
            SaveData.current.decoList.Add(decoData);
        }

        GameEvents.current.onLoadEvent += DestroyMe;
    }

    private void Update()
    {
        decoData.position = transform.position;
        decoData.rotation = transform.rotation;
        decoData.localScale = transform.localScale;
    }

    void DestroyMe()
    {
        GameEvents.current.onLoadEvent -= DestroyMe;
        Destroy(gameObject);
    }
}
