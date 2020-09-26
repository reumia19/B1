using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_10: MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public Dialogue dialogue2;
    public GameObject mObj;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;

    public bool flag;
    public string animDir;
    public float dir;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();

        if (theDB.Find("M10"))
        {
            this.gameObject.SetActive(false);
        }
    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir && theDB.Find("M9"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            
            theDB.Change("basement");
        }

    }
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theDM.ShowDialogue(dialogue2);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        theDB.Change("M10");
        mObj.SetActive(false);
    }
}
