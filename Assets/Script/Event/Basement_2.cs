using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Basement_2 : MonoBehaviour
{
    [SerializeField]
    public Dialogue dialogue1;
    public Dialogue dialogue2;
    public Dialogue dialogue3;
    public Dialogue dialogue4;
    public Dialogue openDialogue;

    public Choice theOpen;

    public bool flag;
    public string animDir;
    public float dir;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private BGMManager theBGM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;
    private ChoiceManager theChoice;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theBGM = FindObjectOfType<BGMManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        theChoice = FindObjectOfType<ChoiceManager>();
    }
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && thePlayer.animator.GetFloat(animDir) == dir && theDB.Find("M2"))
        {
            flag = true;
            if (theDB.Find("Key") && theDB.Find("Light"))
            {
                StartCoroutine(Event1Coroutine());
            }
            else if(theDB.Find("Key") && !theDB.Find("Light"))
            {
                StartCoroutine(Event2Coroutine());
            }
            else if (!theDB.Find("Key") && theDB.Find("Light"))
            {
                StartCoroutine(Event3Coroutine());
            }
            else
            {
                StartCoroutine(Event4Coroutine());
            }
                flag = true;
        }
    }

    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theChoice.ShowChoice(theOpen);
        yield return new WaitUntil(() => !theChoice.choicing);
        theDM.ShowDialogue(openDialogue);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        thePlayer.beforeMapName = "B1-Corridor";
        SceneManager.LoadScene("B1");

    }
    IEnumerator Event2Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theChoice.ShowChoice(theOpen);
        yield return new WaitUntil(() => !theChoice.choicing);
        theDM.ShowDialogue(openDialogue);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        thePlayer.beforeMapName = "B1-Corridor";
        SceneManager.LoadScene("B1");

    }
    IEnumerator Event3Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue3);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        theDB.Change("End");
    }
    IEnumerator Event4Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue4);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        theDB.Change("End");

    }
}
