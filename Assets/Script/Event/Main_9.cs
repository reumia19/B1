using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_9: MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public GameObject transfer;
    

    private OrderManager theOrder;
    private AudioManager theAudio;
    private DialogueManager theDM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;


    public bool flag;
    public string animDir;
    public float dir;
    public string addItem;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theAudio = FindObjectOfType<AudioManager>();
        theDM = FindObjectOfType<DialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        if (theDB.Find("M9"))
        {
            transfer.SetActive(true);
            this.gameObject.SetActive(false);
            
        }
    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir&& theDB.Find("M8")&&theDB.Find("Pin"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("M9");
        }

    }
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theAudio.Play(addItem);
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        transfer.SetActive(true);
        this.gameObject.SetActive(false);
    }
}
