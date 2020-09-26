using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutorial_3 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    public bool flag;
    public string book;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private BGMManager theBGM;
    private PlayerManager thePlayer;
    private AudioManager theAudio;
    private DatabaseManager theDB;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theBGM = FindObjectOfType<BGMManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theAudio = FindObjectOfType<AudioManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat("DirX") == -1 && theDB.Find("T2"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("T3");
        }
    }

    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theAudio.Play(book);
        theDM.ExitDialogue();
        theOrder.Move();
        this.gameObject.SetActive(false);

    }


}
