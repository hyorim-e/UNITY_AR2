using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class etcMove : MonoBehaviour
{
    public float speed = 5.0f;  // 이동 속도
    public float moveInterval = 1.0f; // 이동 간격
    private float moveTimer = 0.0f; // 이동 타이머

    public GameObject[] objectsToMove; // 이동시킬 객체들

    void Update()
    {
        // 이동 타이머를 갱신
        moveTimer += Time.deltaTime;

        // 이동 간격마다 객체들을 랜덤한 방향으로 이동
        if (moveTimer >= moveInterval)
        {
            foreach (GameObject obj in objectsToMove)
            {
                // 랜덤한 방향 생성
                Vector3 direction = new Vector3(Random.Range(-1.0f, 1.0f), 0.0f, Random.Range(-1.0f, 1.0f)).normalized;

                // 객체를 방향으로 이동시킴
                obj.transform.Translate(direction * speed * Time.deltaTime);
            }

            // 이동 타이머 초기화
            moveTimer = 0.0f;
        }
    }
}
