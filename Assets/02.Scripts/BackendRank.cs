using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;

using BackEnd; // �ڳ� SDK namespace �߰�

public class BackendRank// : MonoBehaviour
{
    private static BackendRank _instance = null;

    public static BackendRank Instance
    {
        get
        {
            if(_instance == null)
            {
                _instance = new BackendRank();
            }

            return _instance;
        }
    }

    public void RankInsert(int score)
    {
        string rankUUID = "85a845e0-2c44-11ee-9fe3-01011b9c222c";

        string tableName = "USER_DATA";
        string rowInDate = string.Empty;

        // ��ŷ�� �����ϱ� ���ؼ��� ���� �����Ϳ��� ����ϴ� �������� inDate���� �ʿ�
        // ���� �����͸� �ҷ��� ��, �ش� �������� inDate���� �����ϴ� �۾��� �ؾ���.
        Debug.Log("��ȸ�� �õ��մϴ�.");
        var bro = Backend.GameData.GetMyData(tableName, new Where());

        if(bro.IsSuccess() == false)
        {
            Debug.LogError("������ ��ȸ �� ������ �߻��߽��ϴ� : " + bro);
            return;
        }

        Debug.Log("������ ��ȸ�� �����߽��ϴ� : " + bro);

        if(bro.FlattenRows().Count > 0)
        {
            rowInDate = bro.FlattenRows()[0]["inDate"].ToString();
        }
        else
        {
            Debug.Log("�����Ͱ� �������� �ʽ��ϴ�. ������ ������ �õ��մϴ�.");
            var bro2 = Backend.GameData.Insert(tableName);

            if(bro2.IsSuccess() == false)
            {
                Debug.LogError("������ ���� �� ������ �߻��߽��ϴ� : " + bro2);
                return;
            }

            Debug.Log("������ ���Կ� �����߽��ϴ� : " + bro2);

            rowInDate = bro2.GetInDate();
        }

        Debug.Log("�� ���� ������ rowInDate : " + rowInDate); // ����� rowInDate�� ��

        Param param = new Param();
        param.Add("level", score);

        Debug.Log("��ŷ ������ �õ��մϴ�.");
        var rankBro = Backend.URank.User.UpdateUserScore(rankUUID, tableName, rowInDate, param);

        if(rankBro.IsSuccess() == false)
        {
            Debug.LogError("��ŷ ��� �� ������ �߻��߽��ϴ�. : " + rankBro);
            return;
        }

        Debug.Log("��ŷ ���Կ� �����߽��ϴ�. : " + rankBro);
    }

    public void RankGet() { 
    
    }
}