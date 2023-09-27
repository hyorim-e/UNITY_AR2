using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks; // async 기능을 이용하기 위해서는 해당 namespace가 필요

using BackEnd; // 뒤끝 SDK namespace 추가

public class BackendManager : MonoBehaviour
{
    private void Awake()
    {
        // Update() 메소드의 Backend.AsyncPoll(); 호출을 위해 오브젝트 파괴하지 않는다
        DontDestroyOnLoad(gameObject);

        // 뒤끝 서버 초기화
        BackendSetup();

    }
    void Start()
    {
        Test();
    }

    private void Update()
    {
        if (Backend.IsInitialized)
        {
            Backend.AsyncPoll();
        }
    }

    private void BackendSetup()
    {
        var bro = Backend.Initialize(true); // 뒤끝 초기화

        // 뒤끝 초기화에 대한 응답값
        if (bro.IsSuccess())
        {
            Debug.Log("초기화 성공 : " + bro); // 성공일 경우 statusCode 204 Success
        }
        else
        {
            Debug.LogError("초기화 실패 : " + bro); // 실패일 경우 statusCode 400대 에러 발생
        }

    }

    /// <summary>
    /// 동기 함수를 비동기에서 호출하게 해주는 함수(유니티 UI 접근 불가)
    /// </summary>
    async void Test()
    {
        await Task.Run(() =>
        {
            //BackendLogin.Instance.CustomSignUp("user1", "1234"); // 뒤끝 회원가입
            BackendLogin.Instance.CustomLogin("user1", "1234"); // 뒤끝 로그인

            //BackendGameData.Instance.GameDataInsert(); // 데이터 삽입 함수
            BackendRank.Instance.RankInsert(100); // 랭킹 등록하기 함수

            //BackendLogin.Instance.UpdateNickname("원하는 이름"); // 뒤끝 닉네임 변경
            Debug.Log("테스트를 종료합니다.");
        });
    }
}
