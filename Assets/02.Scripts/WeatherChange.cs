using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeatherChange : MonoBehaviour
{
    public enum Weather { SUNNY, RAIN, SNOW };
    public Weather currentWeather;
    public ParticleSystem RAIN;
    public ParticleSystem SNOW;
    public float weather_time = 10f; // ���� �ٲ�� ����
    public int next_weather; //�����ϰ� ���� ���� ����

    void Start()
    {
        currentWeather = Weather.SUNNY; //������ ���� ����
        next_weather = 1; // ���� ������ ��
    }

    #region �������� ���� ����
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
        //�Ű������� ���� ������ ���� ������ ���� �ʴٸ� �Ű������� ���� ������ ���� 
    }

  
    void Update()
    {
        this.weather_time -= Time.deltaTime; //10�ʵ����� �� ���� ����
        if (next_weather == 1) //���� ������ ���� ��
        {
            if (this.weather_time <= 0) //���� ������ ���ѽð��� ������
            {
                next_weather = Random.Range(0, 3); //���� ���� ���(0: ����, 1: ��, 2: ��)
                ChangeWeather(Weather.RAIN); //��� �ٲ�
                weather_time = 10f;
            }
        }
        if (next_weather == 0) //���� ������ ������ ��
        {
            if (this.weather_time <= 0) //���� ������ ���ѽð��� ������
            {
                next_weather = Random.Range(0, 3); //���� ���� ���(0: ����, 1: ��, 2: ��)
                ChangeWeather(Weather.SUNNY); //�������� �ٲ�
                weather_time = 30f;
            }
        }
        if (next_weather == 2) //���� ������ ���� ��
        {
            if (this.weather_time <= 0) //���� ������ ���ѽð��� ������
            {
                next_weather = Random.Range(0, 3); //���� ���� ���(0: ����, 1: ��, 2: ��)
                ChangeWeather(Weather.SNOW); //������ �ٲ�
                weather_time = 10f;
            }
        }
    }
    #endregion
}
