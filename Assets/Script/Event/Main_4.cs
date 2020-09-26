using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_4 : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]

    public Dialogue dialogue1;
    public Dialogue dialogue2;

    public bool flag;
    public string open;
    public string close;
    public GameObject NPC_BLUE;
    public GameObject NPC_DOA;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private BGMManager theBGM;
    private AudioManager theAudio;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;
    private WaitForSeconds wait = new WaitForSeconds(0.5f);
    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theBGM = FindObjectOfType<BGMManager>();
        theAudio = FindObjectOfType<AudioManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        //StopAllCoroutines();
        if (!flag && theDB.Find("M3"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("M4");
        }
    }

    IEnumerator Event1Coroutine()
    {
        //theOrder.PreloadCharacter();
        theOrder.NotMove();
        theAudio.Play(open);
        NPC_DOA.gameObject.SetActive(true);
        NPC_BLUE.gameObject.SetActive(true);
        theOrder.PreloadCharacter();
        theOrder.Turn("DOA", "UP");
        yield return new WaitForSeconds(0.1f);
        theAudio.Play(close);
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move("BLUE", "RIGHT");
        theOrder.Move("BLUE", "RIGHT");
        yield return wait;
        theDM.ShowDialogue(dialogue2);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();

        theOrder.Move("BLUE", "LEFT");
        theOrder.Move("BLUE", "LEFT");
        yield return wait;
        theOrder.Move("DOA", "UP");
        yield return wait;
        theOrder.Move("DOA", "UP");
        theOrder.Move("DOA", "UP");
        yield return wait;
        theOrder.Move("DOA", "UP");
        yield return wait;
        theOrder.Move("DOA", "LEFT");
        theOrder.Move("DOA", "LEFT");
        yield return wait;
        theOrder.Move("DOA", "LEFT");
        theOrder.Move("DOA", "LEFT");
        yield return wait;
        theOrder.Move();
        this.gameObject.SetActive(false);

    }

}
