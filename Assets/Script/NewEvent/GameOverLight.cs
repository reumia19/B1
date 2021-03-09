using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameOverLight :GoGameOver
{
    bool flag;
    public float seconds;
    public GameObject LightObj;
    WaitForSeconds waitTime;
    void Start()
    {
        base.Start();
        theDB = FindObjectOfType<DatabaseManager>();
        transferMapName = "Ending";
        //라이트 끄고 켜지는 간격 랜덤 설정
        seconds = Random.Range(1f, 3);
        waitTime = new WaitForSeconds(seconds);
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (LightObj.activeSelf)
        {
            theDB.Change(overName);
            StartCoroutine(base.TransferCoroutine());
        }
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        return;
    }

    private void Update()
    {
        if (!flag)
        {
            flag = true;
            StartCoroutine(LightOn());
        }
    }

    IEnumerator LightOn()
    {
        LightObj.SetActive(true);
        yield return waitTime;
        StartCoroutine(LightOff());
    }
    IEnumerator LightOff()
    {
        LightObj.SetActive(false);
        yield return waitTime;
        flag = false;
    }
}
