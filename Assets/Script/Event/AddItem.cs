using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddItem : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private AudioManager theAudio;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;

    public bool flag;
    public string animDir;
    public float dir;
    public string itemName;
    public string addAudio;
    public string beforeScene;
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theAudio = FindObjectOfType<AudioManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        if (theDB.Find(itemName))
        {
            this.gameObject.SetActive(false);
        }
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir&&theDB.Find(beforeScene))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change(itemName);
        }

    }
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theAudio.Play(addAudio);
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        this.gameObject.SetActive(false);

    }
}
