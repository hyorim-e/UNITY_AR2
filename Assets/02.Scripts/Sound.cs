using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sound : MonoBehaviour
{
    public AudioSource footstepsSound;
    public AudioSource buttonSound;
    public AudioSource startbuttonSound;

    void Start()
    {
        footstepsSound = GetComponent<AudioSource>();
        buttonSound = GetComponent<AudioSource>();
        startbuttonSound = GetComponent<AudioSource>();
    }

    public void footstepSound()
    {
        footstepsSound.Play();
    }

    public void buttonClickSound()
    {
        buttonSound.Play();
    }

    public void startbuttonClickSound()
    {
        startbuttonSound.Play();
    }
}



