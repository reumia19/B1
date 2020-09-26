using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomDialogue : MonoBehaviour
{
    public Dialogue dialogue1;
    public Dialogue dialogue2;
    public Dialogue dialogue3;
    public Dialogue dialogue4;
    public Dialogue dialogue5;
    public Dialogue dialogue6;
    public GameObject orNot;
    public bool flag;
    static int count = 0;
    public bool corend;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private DatabaseManager theDB;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z)&& !orNot.activeSelf)
        {
            Debug.LogWarning("!!!! " + Time.time + ", " + name + ", " + collision.name + ", " + flag);
            flag = true;
            StartCoroutine(Event1Coroutine());
        }

    }
    private void OnTriggerExit2D(Collider2D collision)
    {
        Debug.LogWarning("~~~~" + name + ", " + collision.name);
        // 유니티 물리엔진 때문에 작동하는 게 트리거, 콜리젼 이벤트다. 실질적인 충돌을 처리하는 게 콜리젼, 안에 들어오거나 나가거나 하는걸 검출하는 게 트리거
        StartCoroutine(ExitCoruutine());
    }
    IEnumerator Event1Coroutine()
    {
        count++;
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        corend = false;

        if (count > 5)
        {
            StartCoroutine(d6Coroutine());
        }
        else
        {
            switch (Random.Range(1, 5))
            {
                case 1:
                    StartCoroutine(d1Coroutine());
                    break;
                case 2:
                    StartCoroutine(d2Coroutine());
                    break;
                case 3:
                    StartCoroutine(d3Coroutine());
                    break;
                case 4:
                    StartCoroutine(d4Coroutine());
                    break;
                case 5:
                    StartCoroutine(d5Coroutine());
                    break;

            }
        }
        yield return new WaitUntil(() => corend);
        theDM.ExitDialogue();
        theOrder.Move();
    }
    IEnumerator ExitCoruutine()
    {
        yield return new WaitForSeconds(1f);
        flag = false;
    }

    IEnumerator d1Coroutine()
    {
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        corend = true;
    }
    IEnumerator d2Coroutine()
    {
        theDM.ShowDialogue(dialogue2);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        corend = true;
    }
    IEnumerator d3Coroutine()
    {
        theDM.ShowDialogue(dialogue3);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        corend = true;
    }
    IEnumerator d4Coroutine()
    {
        theDM.ShowDialogue(dialogue4);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        corend = true;
    }
    IEnumerator d5Coroutine()
    {
        theDM.ShowDialogue(dialogue5);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        corend = true;
    }
    IEnumerator d6Coroutine()
    {
        theDM.ShowDialogue(dialogue6);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        corend = true;
    }
}
