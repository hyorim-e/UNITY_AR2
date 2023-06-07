using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sound : MonoBehaviour
{
    public AudioSource BGM;
    public AudioSource ButtonClick;
    public AudioSource FootSound;
    public AudioSource Rain;

    public void BGMVolume(float volume)
    {
        BGM.volume = volume;
    }

    public void OnSoundEffect(float volume)
    {
        ButtonClick.volume = volume;
        FootSound.volume = volume;
        Rain.volume = volume;
    }
}



