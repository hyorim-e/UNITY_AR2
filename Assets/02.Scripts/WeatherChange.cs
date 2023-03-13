using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeatherChange : MonoBehaviour
{
    public enum Weather { SUNNY, RAIN, SNOW };
    public Weather currentWeather;
    public ParticleSystem RAIN;
    public ParticleSystem SNOW;
    public float weather_time = 10f; // 날씨 바뀌는 간격
    public int next_weather; //랜덤하게 다음 날씨 지정

    void Start()
    {
        currentWeather = Weather.SUNNY; //시작은 맑은 날씨
        next_weather = 1; // 다음 날씨는 비
    }

    #region 랜덤으로 날씨 설정
    public void ChangeWeather(Weather weatherType)   
    {
        if (weatherType != this.currentWeather)
        {
            switch (weatherType)
            {
                case Weather.SUNNY:
                    currentWeather = Weather.SUNNY;
                    this.RAIN.Stop();
                    this.SNOW.Stop();
                    break;
                case Weather.RAIN:
                    currentWeather = Weather.RAIN;
                    this.SNOW.Stop();
                    this.RAIN.Play();
                    break;
                case Weather.SNOW:
                    currentWeather = Weather.SNOW;
                    this.RAIN.Stop();
                    this.SNOW.Play();
                    break;
            }
        }
        //매개변수로 받은 날씨가 현재 날씨와 같지 않다면 매개변수로 받은 날씨로 변경 
    }

  
    void Update()
    {
        this.weather_time -= Time.deltaTime; //10초동안은 그 날씨 유지
        if (next_weather == 1) //다음 날씨가 비일 때
        {
            if (this.weather_time <= 0) //현재 날씨의 제한시간이 끝나면
            {
                next_weather = Random.Range(0, 3); //다음 날씨 계산(0: 맑음, 1: 비, 2: 눈)
                ChangeWeather(Weather.RAIN); //비로 바꿈
                weather_time = 10f;
            }
        }
        if (next_weather == 0) //다음 날씨가 맑음일 때
        {
            if (this.weather_time <= 0) //현재 날씨의 제한시간이 끝나면
            {
                next_weather = Random.Range(0, 3); //다음 날씨 계산(0: 맑음, 1: 비, 2: 눈)
                ChangeWeather(Weather.SUNNY); //맑음으로 바꿈
                weather_time = 30f;
            }
        }
        if (next_weather == 2) //다음 날씨가 눈일 때
        {
            if (this.weather_time <= 0) //현재 날씨의 제한시간이 끝나면
            {
                next_weather = Random.Range(0, 3); //다음 날씨 계산(0: 맑음, 1: 비, 2: 눈)
                ChangeWeather(Weather.SNOW); //눈으로 바꿈
                weather_time = 10f;
            }
        }
    }
    #endregion
}
