using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Main_5 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private ChoiceManager theChoice;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;
    private FadeManager theFade;
    private BGMManager theBGM;

    public bool flag;
    public string animDir;
    public float dir;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theChoice = FindObjectOfType<ChoiceManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        theFade = FindObjectOfType<FadeManager>();
        theBGM = FindObjectOfType<BGMManager>();
        if (!theDB.Find("M4"))
        {
            this.gameObject.SetActive(false);
        }
    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && theDB.Find("M4"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("M5");
        }

    }
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theBGM.FadeOutMusic();
        theFade.FadeOut();
        yield return new WaitForSeconds(2f);
        theBGM.Stop();
        thePlayer.beforeMapName = "2-Corridor";
        SceneManager.LoadScene("N1-Ryang");
        theFade.FadeIn();
        theOrder.Move();
    }
    }
