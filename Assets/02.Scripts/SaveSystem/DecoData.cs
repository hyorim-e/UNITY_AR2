using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public enum DecoType
{
    TheHost,
    AliceInWonderland,
    Fox,
    Fantasy_House,
    Church,
    Bear,
    Tiger,
    Apple_Panda
}

[System.Serializable]
public class DecoData
{
    public string id;

    public DecoType decoType;

    public Vector3 position;

    public Quaternion rotation;

    public Vector3 localScale;
}
