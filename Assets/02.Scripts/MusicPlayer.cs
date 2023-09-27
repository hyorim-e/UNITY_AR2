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

    // Start is called before the first frame update
    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        StartMusic();
        MusicTimeUI();
    }

    // Update is called once per frame
    void Update()
    {
        if (!stop)
        {
            TimeSlider.value += Time.deltaTime;

            if (TimeSlider.value >= audioSource.clip.length)
            {
                currentMusic++;

                if (currentMusic >= clipNames.Length)
                    currentMusic = 0;

                StartMusic();
            }
        }
    }

    public void StartMusic(int changeMusic = 0)
    {
        currentMusic += changeMusic;

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

        // Slider, Text에 재생 시간 정보 업데이트
        StartCoroutine("OnPlayTimeUI");
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
                break;
            }
        }
    }
}