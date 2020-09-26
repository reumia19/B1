using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollInfo : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private AudioManager theAudio;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;

    public bool flag;
    public bool repeat;
    public string scene;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theAudio = FindObjectOfType<AudioManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && !theDB.Find(scene))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
        }

    }
    private void OnCollisionExit2D(Collision2D collision)
    {
        if (repeat)
        {
            flag = false;
        }
       
    }
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();

    }
}
