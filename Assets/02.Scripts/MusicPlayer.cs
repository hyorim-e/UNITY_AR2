using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.Networking;

public class MusicPlayer : MonoBehaviour
{
    int currentMusic = 0;  // 현재 음악
    AudioSource audioSource;
    public AudioClip[] clipNames;  // 배경 음악 목록 
    public TextMeshProUGUI musicTitle;  // 음악 제목
    public Slider TimeSlider;  // 음악 재생 시간
    private bool stop = false;

    public TextMeshProUGUI CurrentTime;  // 현재 재생 시간
    public TextMeshProUGUI MaxTime;  // 총 재생 시간

    public GameObject OSTPlay;  // OST Play Button
    public GameObject OSTStop; // OST Stop Button

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        StartMusic();
        MusicTimeUI();

        // Slider, Text에 재생 시간 정보 업데이트
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
                Debug.Log("(재생마침시작)currentMusic: " + currentMusic);
                TimeSlider.value = 0;
                currentMusic += 1;

                if (currentMusic >= clipNames.Length)
                    currentMusic = 0;

                StartMusic();
                Debug.Log("(재생마침완료)currentMusic: " + currentMusic);
            }
        }
    }

    public void StartMusic(int changeMusic = 0)
    {
        currentMusic += changeMusic;

        switch (changeMusic)
        {
            case -1:
                Debug.Log("(이전노래)currentMusic: " + currentMusic);
                break;
            case 0:
                Debug.Log("(현재노래)currentMusic: " + currentMusic);
                break;
            case 1:
                Debug.Log("(다음노래)currentMusic: " + currentMusic);
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

        // Slider, Text에 재생 시간 정보 업데이트 중지
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
            // 현재 재생 시간 표시
            hour = (int)audioSource.time / 3600;
            minutes = (int)(audioSource.time % 3600) / 60;
            seconds = (int)(audioSource.time % 3600) % 60;
            CurrentTime.text = $"{hour:D2}:{minutes:D2}:{seconds:D2}";

            // 총 재생 시간 표시
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


    // OST 목록 버튼 클릭 시 해당 버튼의 텍스트와 일치하는 음악 재생
    public void OnPlayMusicList(TextMeshProUGUI buttonText)  
    {
        string buttonName = buttonText.text;  // 버튼 텍스트 가져오기

        // 버튼 텍스트와 일치하는 곡을 찾아 재생
        for (int i = 0; i < clipNames.Length; i++)
        {
            if (clipNames[i].name == buttonName)
            {
                currentMusic = i;
                StartMusic();
                // Slider, Text에 재생 시간 정보 업데이트
                StartCoroutine("OnPlayTimeUI");
                break;
            }
        }
        Debug.Log("(목록클릭)currentMusic: " + currentMusic);
    }
}