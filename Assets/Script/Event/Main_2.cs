using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_2 : MonoBehaviour
{
    [SerializeField]

    public Choice choice1;
    public Choice choice2;

    public Dialogue dialogue1;
    public Dialogue dialogue2;
    public Dialogue dialogue3;
    public Dialogue dialogue4;
    public Dialogue dialogue5;
    public Dialogue dialogue6;
    public Dialogue dialogue7;

    private ChoiceManager theChoice;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;

    public bool flag;
    public string animDir;
    public float dir;
    public GameObject motherObject;

    private string look;

    private bool cor = false;
    private bool clear1 = false;
    private bool clear2 = false;
    private bool clear3 = false;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theChoice = FindObjectOfType<ChoiceManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }


    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir&& theDB.Find("M1"))
        {
            flag = true;
            Look();
            StartCoroutine(Event1Coroutine());
            theDB.Change("M2");
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
        theOrder.Turn("Laco", look);
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
        }
        else
        {
            theChoice.ExitChoice();
            theDM.ShowDialogue(dialogue3); ///대화
            yield return new WaitUntil(() => !theDM.talking);
            theDM.ExitDialogue();
        }
        while(!clear1 || !clear2 || !clear3)
        {
            StartCoroutine(SecondChoice());
            yield return new WaitUntil(() =>!cor);
        }
        theDM.ShowDialogue(dialogue7); ///대화
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        motherObject.SetActive(false);
    }

    IEnumerator SecondChoice()
    {
        cor = true;
        theChoice.ShowChoice(choice2); ///선택2
        yield return new WaitUntil(() => !theChoice.choicing);
        if (theChoice.GetResult() == 0)
        {
            theChoice.ExitChoice();
            theDM.ShowDialogue(dialogue4); ///대화
            yield return new WaitUntil(() => !theDM.talking);
            theDM.ExitDialogue();
            clear1 = true;
        }
        else if (theChoice.GetResult() == 1)
        {
            theChoice.ExitChoice();
            theDM.ShowDialogue(dialogue5); ///대화
            yield return new WaitUntil(() => !theDM.talking);
            theDM.ExitDialogue();
            clear2 = true;
        }
        else if (theChoice.GetResult() == 2)
        {
            theChoice.ExitChoice();
            theDM.ShowDialogue(dialogue6); ///대화
            yield return new WaitUntil(() => !theDM.talking);
            theDM.ExitDialogue();
            clear3 = true;
        }
        cor = false;
    }
    
}
