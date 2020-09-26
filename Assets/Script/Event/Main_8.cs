using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_8: MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;
    private AudioManager theAudio;

    public bool flag;
    public string animDir;
    public float dir;
    public string sound;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        theAudio = FindObjectOfType<AudioManager>();
        if (theDB.Find("M8"))
        {
            this.gameObject.SetActive(false);
        }
    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && thePlayer.animator.GetFloat(animDir) == dir && theDB.Find("M7"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("M8");
        }
    }

    
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theAudio.Play(sound);
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
    }
}
