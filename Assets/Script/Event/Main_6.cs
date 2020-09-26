using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Main_6 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public Dialogue dialogue2;
    public GameObject theBlue;
    public GameObject Del;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private ChoiceManager theChoice;
    private PlayerManager thePlayer;
    private FadeManager theFade;
    private DatabaseManager theDB;
    private AudioManager theAudio;
    

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
        theFade = FindObjectOfType<FadeManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        theAudio = FindObjectOfType<AudioManager>();

        if (theDB.Find("M6"))
        {
            this.gameObject.SetActive(false);
        }

    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir && theDB.Find("M5"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("M6");
        }

    }
    IEnumerator Event1Coroutine()
    {
        
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theAudio.Play("door_open");
        theBlue.SetActive(true);
        theOrder.PreloadCharacter();
        theOrder.Turn("BLUE", "UP");
        theOrder.Move("BlUE", "UP");
        yield return new WaitForSeconds(1f);
        theDM.ShowDialogue(dialogue2);
        yield return new WaitUntil(() => !theDM.talking);
        theOrder.Move("BLUE", "DOWN");
        yield return new WaitForSeconds(0.5f);
        theDM.ExitDialogue();
        theAudio.Play("door");
        theFade.FadeOut();
        theBlue.SetActive(false);
        yield return new WaitForSeconds(1f);
        theFade.FadeIn();
        theOrder.Move();
        Del.gameObject.SetActive(false);
        this.gameObject.SetActive(false);
    }
}
