using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class etcMove : MonoBehaviour
{
    public float speed = 5.0f;  // �̵� �ӵ�
    public float moveInterval = 1.0f; // �̵� ����
    private float moveTimer = 0.0f; // �̵� Ÿ�̸�

    public GameObject[] objectsToMove; // �̵���ų ��ü��

    void Update()
    {
        // �̵� Ÿ�̸Ӹ� ����
        moveTimer += Time.deltaTime;

        // �̵� ���ݸ��� ��ü���� ������ �������� �̵�
        if (moveTimer >= moveInterval)
        {
            foreach (GameObject obj in objectsToMove)
            {
                // ������ ���� ����
                Vector3 direction = new Vector3(Random.Range(-1.0f, 1.0f), 0.0f, Random.Range(-1.0f, 1.0f)).normalized;

                // ��ü�� �������� �̵���Ŵ
                obj.transform.Translate(direction * speed * Time.deltaTime);
            }

            // �̵� Ÿ�̸� �ʱ�ȭ
            moveTimer = 0.0f;
        }
    }
}
