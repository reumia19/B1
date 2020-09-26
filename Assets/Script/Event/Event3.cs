using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event3 : MonoBehaviour
{
    [SerializeField]

    public Choice choice1;
    public Choice choice2;
    public Choice choice3;

    public Dialogue dialogue1;
    public Dialogue dialogue2;
    public Dialogue dialogue3;
    public Dialogue dialogue4;
    public Dialogue dialogue5;
    public Dialogue dialogue6;
    public Dialogue dialogue7;
    public Dialogue dialogue8;

    private ChoiceManager theChoice;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private PlayerManager thePlayer;

    public bool flag;
    private bool flag2 = true;
    private bool flag3 = true;
    void Start()
    {
        theChoice = FindObjectOfType<ChoiceManager>();
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat("DirX") == 1)
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
        }
        if (!flag2)
        {
            flag2 = true;
            StartCoroutine(Event2Coroutine());
        }
        if(!flag3 &&Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat("DirX") == 1)
        {
            flag3 = true;
            StartCoroutine(Event3Coroutine());
        }
        //if(!flag)
        //   StartCoroutine(MainCoroutine());
    }

    // IEnumerator MainCoroutine()
    // {

    // }


    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theChoice.ExitChoice();
        theChoice.ShowChoice(choice1);
        yield return new WaitUntil(() => !theChoice.choicing);
        theChoice.ExitChoice();
        flag2 = false;
    }

    IEnumerator Event2Coroutine()
    {
            switch (theChoice.GetResult())
            {
                case 0:
                    theDM.ShowDialogue(dialogue7);
                    break;
                case 1:
                    theDM.ShowDialogue(dialogue8);
                    break;
            }

            yield return new WaitUntil(() => !theDM.talking);
        flag3 = false;
    }

    IEnumerator Event3Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theChoice.ExitChoice();
        theChoice.ShowChoice(choice2);
        yield return new WaitUntil(() => !theChoice.choicing);
        switch (theChoice.GetResult())
        {
            case 0:
                theDM.ShowDialogue(dialogue2);
                break;
            case 1:
                theDM.ShowDialogue(dialogue3);
                break;
            case 2:
                theDM.ShowDialogue(dialogue4);
                break;
        }
        yield return new WaitUntil(() => !theDM.talking);
        theOrder.Move();
    }
}
