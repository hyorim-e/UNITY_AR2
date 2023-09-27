using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks; // async ����� �̿��ϱ� ���ؼ��� �ش� namespace�� �ʿ�

using BackEnd; // �ڳ� SDK namespace �߰�

public class BackendManager : MonoBehaviour
{
    private void Awake()
    {
        // Update() �޼ҵ��� Backend.AsyncPoll(); ȣ���� ���� ������Ʈ �ı����� �ʴ´�
        DontDestroyOnLoad(gameObject);

        // �ڳ� ���� �ʱ�ȭ
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
        var bro = Backend.Initialize(true); // �ڳ� �ʱ�ȭ

        // �ڳ� �ʱ�ȭ�� ���� ���䰪
        if (bro.IsSuccess())
        {
            Debug.Log("�ʱ�ȭ ���� : " + bro); // ������ ��� statusCode 204 Success
        }
        else
        {
            Debug.LogError("�ʱ�ȭ ���� : " + bro); // ������ ��� statusCode 400�� ���� �߻�
        }

    }

    /// <summary>
    /// ���� �Լ��� �񵿱⿡�� ȣ���ϰ� ���ִ� �Լ�(����Ƽ UI ���� �Ұ�)
    /// </summary>
    async void Test()
    {
        await Task.Run(() =>
        {
            //BackendLogin.Instance.CustomSignUp("user1", "1234"); // �ڳ� ȸ������
            BackendLogin.Instance.CustomLogin("user1", "1234"); // �ڳ� �α���

            //BackendGameData.Instance.GameDataInsert(); // ������ ���� �Լ�
            BackendRank.Instance.RankInsert(100); // ��ŷ ����ϱ� �Լ�

            //BackendLogin.Instance.UpdateNickname("���ϴ� �̸�"); // �ڳ� �г��� ����
            Debug.Log("�׽�Ʈ�� �����մϴ�.");
        });
    }
}
