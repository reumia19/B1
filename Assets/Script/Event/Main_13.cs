using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Main_13 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public Dialogue dialogue3;
    public Dialogue dialogue4;


    public bool flag;

    private FadeManager theFade;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;
    private BGMManager theBGM;

    // Start is called before the first frame update
    void Start()
    {
        theFade = FindObjectOfType<FadeManager>();
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        theBGM = FindObjectOfType<BGMManager>();
    }


    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (!flag)
        {
            flag = true;

            theOrder.PreloadCharacter();
            theOrder.NotMove();

            if (theDB.Find("Light") && theDB.Find("Key"))
            {
                StartCoroutine(Event1Coroutine());
            }
            else if (theDB.Find("Light") && !theDB.Find("Key"))
            {
                StartCoroutine(Event1Coroutine());
            }
            else if (!theDB.Find("Light") && theDB.Find("Key"))
            {
                StartCoroutine(Event3Coroutine());
            }
            else
            {
                StartCoroutine(Event4Coroutine());
            }

        }


    }

    IEnumerator Event1Coroutine()
    {
        theDM.ShowDialogue(dialogue1);///대화
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        this.gameObject.SetActive(false);
    }

    IEnumerator Event3Coroutine()
    {
        theDM.ShowDialogue(dialogue3);///대화
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        this.gameObject.SetActive(false);
    }
    IEnumerator Event4Coroutine()
    {
        theDM.ShowDialogue(dialogue4);///대화
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theFade.FadeOut();
        yield return new WaitForSeconds(2f);
        theBGM.Stop();
        thePlayer.beforeMapName = "N1-Corridor";
        SceneManager.LoadScene("N1-Elevator");
        theFade.FadeIn();
        theOrder.Move();
        this.gameObject.SetActive(false);
    }
}
