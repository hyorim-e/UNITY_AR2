using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;

public class MusicPlayer : MonoBehaviour
{
    int currentMusic = 0;  // ���� ����
    AudioSource audioSource;
    public AudioClip[] clipNames;  // ��� ���� ��� 
    public TextMeshProUGUI musicTitle;  // ���� ����
    public Slider TimeSlider;  // ���� ��� �ð�
    private bool stop = false;

    public TextMeshProUGUI CurrentTime;  // ���� ��� �ð�
    public TextMeshProUGUI MaxTime;  // �� ��� �ð�

    public GameObject OSTPlay;  // OST Play Button
    public GameObject OSTStop; // OST Stop Button

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        StartMusic();
        MusicTimeUI();

        // Slider, Text�� ��� �ð� ���� ������Ʈ
        StartCoroutine("OnPlayTimeUI");
    }

    void Update()
    {
        if (!stop)
        {
            //TimeSlider.value += Time.deltaTime;
            TimeSlider.value = audioSource.time;

            if (TimeSlider.value >= audioSource.clip.length)
            {
                Debug.Log("(�����ħ����)currentMusic: " + currentMusic);
                TimeSlider.value = 0;
                currentMusic += 1;

                if (currentMusic >= clipNames.Length)
                    currentMusic = 0;

                StartMusic();
                Debug.Log("(�����ħ�Ϸ�)currentMusic: " + currentMusic);
            }
        }
    }

    public void StartMusic(int changeMusic = 0)
    {
        currentMusic += changeMusic;

        switch (changeMusic)
        {
            case -1:
                Debug.Log("(�����뷡)currentMusic: " + currentMusic);
                break;
            case 0:
                Debug.Log("(����뷡)currentMusic: " + currentMusic);
                break;
            case 1:
                Debug.Log("(�����뷡)currentMusic: " + currentMusic);
                break;
        }

        if (currentMusic >= clipNames.Length)
        {
            currentMusic = 0;
        }

        else if (currentMusic < 0)
        {
            currentMusic = clipNames.Length - 1;
        }

        if (audioSource.isPlaying && changeMusic == 0)
        {
            return;
        }

        if (stop)
        {
            stop = false;
        }

        audioSource.clip = clipNames[currentMusic];
        musicTitle.text = audioSource.clip.name;
        TimeSlider.maxValue = audioSource.clip.length;
        TimeSlider.value = 0;
        audioSource.Play();

        OSTPlay.SetActive(false);
        OSTStop.SetActive(true);
    }

    public void StopMusic()
    {
        audioSource.Stop();
        stop = true;

        OSTPlay.SetActive(true);
        OSTStop.SetActive(false);

        // Slider, Text�� ��� �ð� ���� ������Ʈ ����
        StopCoroutine("OnPlayTimeUI");
        MusicTimeUI();
    }

    public void MusicTimeUI()
    {
        TimeSlider.value = 0;
        CurrentTime.text = "00:00:00";
        MaxTime.text = "00:00:00";
    }

    public IEnumerator OnPlayTimeUI()
    {
        int hour = 0;
        int minutes = 0;
        int seconds = 0;

        while (true)
        {
            // ���� ��� �ð� ǥ��
            hour = (int)audioSource.time / 3600;
            minutes = (int)(audioSource.time % 3600) / 60;
            seconds = (int)(audioSource.time % 3600) % 60;
            CurrentTime.text = $"{hour:D2}:{minutes:D2}:{seconds:D2}";

            // �� ��� �ð� ǥ��
            hour = (int)audioSource.clip.length / 3600;
            minutes = (int)(audioSource.clip.length % 3600) / 60;
            seconds = (int)(audioSource.clip.length % 3600) % 60;
            MaxTime.text = $"{hour:D2}:{minutes:D2}:{seconds:D2}";

            yield return new WaitForSeconds(1);
        }
    }

    public void MusicVolume(float volume)
    {
        audioSource.volume = volume;
    }


    // OST ��� ��ư Ŭ�� �� �ش� ��ư�� �ؽ�Ʈ�� ��ġ�ϴ� ���� ���
    public void OnPlayMusicList(TextMeshProUGUI buttonText)  
    {
        string buttonName = buttonText.text;  // ��ư �ؽ�Ʈ ��������

        // ��ư �ؽ�Ʈ�� ��ġ�ϴ� ���� ã�� ���
        for (int i = 0; i < clipNames.Length; i++)
        {
            if (clipNames[i].name == buttonName)
            {
                currentMusic = i;
                StartMusic();
                // Slider, Text�� ��� �ð� ���� ������Ʈ
                StartCoroutine("OnPlayTimeUI");
                break;
            }
        }
        Debug.Log("(���Ŭ��)currentMusic: " + currentMusic);
    }
}