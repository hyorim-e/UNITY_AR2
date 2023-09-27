using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DecoManager : MonoBehaviour
{
    public List<GameObject> decoList = new List<GameObject>();

    /*void Start()
    {
        Application.targetFrameRate = 60;
    }*/

    public void OnSave()
    {
        SerializationManager.Save("DecoSave", SaveData.current);
    }

    public void OnLoad()
    {
        //Tell the game to load (and the current game objects to be destroyed)
        GameEvents.current.dispatchOnLoadEvent();

        SaveData.current = (SaveData)SerializationManager.Load(Application.persistentDataPath + "/saves/DecoSave.save");

        for (int i = 0; i < SaveData.current.decoList.Count; i++)
        {
            DecoData currentDeco = SaveData.current.decoList[i];
            GameObject obj = Instantiate(decoList[(int)currentDeco.decoType]);
            DecoHandler decoHandler = obj.GetComponent<DecoHandler>();
            decoHandler.decoData = currentDeco;
            decoHandler.transform.position = currentDeco.position;
            decoHandler.transform.rotation = currentDeco.rotation;

            obj.SetActive(true);
        }
    }
}
