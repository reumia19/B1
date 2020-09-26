using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_1 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public Dialogue dialogue2;
    public Dialogue dialogue3;
    public Dialogue dialogue4;
    public Dialogue dialogue5;
    public Dialogue dialogue6;
    public Dialogue dialogue7;
    public Dialogue dialogue8;
    public Dialogue dialogue9;
    public Dialogue dialogue10;


    public Choice choice1;
    public Choice choice2;
    public Choice choice3;
    public Choice choice4;


    public bool flag;
    public string animDir;
    public float dir;
    public GameObject motherObject;
    public GameObject blue;

    private FadeManager theFade;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private ChoiceManager theChoice;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;

    private string look;

    void Start()
    {
        theFade = FindObjectOfType<FadeManager>();
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theChoice = FindObjectOfType<ChoiceManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();

        if (theDB.Find("M4"))
        {
            blue.SetActive(false);
           motherObject.SetActive(false);
        }
    }
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir&& theDB.Find("T3"))
        {
            flag = true;
            Look();
            StartCoroutine(Event1Coroutine());
            theDB.Change("M1");
        }
    }
    private void Look()
    {
        if (animDir == "DirX")
        {
            if (dir == -1)
            {
                look = "RIGHT";
            }
            else
            {
                look = "LEFT";
            }
        }
        else
        {
            if (dir == -1)
            {
                look = "UP";
            }
            else
            {
                look = "DOWN";
            }
        }
    }
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theOrder.Turn("BLUE", look);
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();


        theChoice.ShowChoice(choice1); ///선택1
        yield return new WaitUntil(() => !theChoice.choicing);
        if (theChoice.GetResult() == 0)
        {
            theChoice.ExitChoice();
            theDM.ShowDialogue(dialogue2); ///대화
            yield return new WaitUntil(() => !theDM.talking);
            theDM.ExitDialogue();


            theChoice.ShowChoice(choice2); ///선택 
            yield return new WaitUntil(() => !theChoice.choicing);
            
            if (theChoice.GetResult() == 0)
            {
                theChoice.ExitChoice();
                theDM.ShowDialogue(dialogue4);///대화
                yield return new WaitUntil(() => !theDM.talking);
                theDM.ExitDialogue();

                theChoice.ShowChoice(choice3);
                yield return new WaitUntil(() => !theChoice.choicing);

                if (theChoice.GetResult() == 0)
                {
                    theChoice.ExitChoice();
                    theDM.ShowDialogue(dialogue6);
                    yield return new WaitUntil(() => !theDM.talking);
                    theDM.ExitDialogue();
                }
                else
                {
                    theChoice.ExitChoice();
                    theDM.ShowDialogue(dialogue7);
                    yield return new WaitUntil(() => !theDM.talking);
                    theDM.ExitDialogue();

                }
            }
            else
            {
                theChoice.ExitChoice();
                theDM.ShowDialogue(dialogue5);
                yield return new WaitUntil(() => !theDM.talking);
                theDM.ExitDialogue();

                theChoice.ShowChoice(choice4);
                yield return new WaitUntil(() => !theChoice.choicing);

                if (theChoice.GetResult() == 0)
                {
                    theChoice.ExitChoice();
                    theDM.ShowDialogue(dialogue8);
                    yield return new WaitUntil(() => !theDM.talking);
                    theDM.ExitDialogue();
                }
                else
                {
                    theChoice.ExitChoice();
                    theDM.ShowDialogue(dialogue9);
                    yield return new WaitUntil(() => !theDM.talking);
                    theDM.ExitDialogue();

                }
            }

        }
        else
        {
            theChoice.ExitChoice();
            theDM.ShowDialogue(dialogue3);
            yield return new WaitUntil(() => !theDM.talking);
            theDM.ExitDialogue();
        }
        theDM.ShowDialogue(dialogue10);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        motherObject.gameObject.SetActive(false);

    }



}
