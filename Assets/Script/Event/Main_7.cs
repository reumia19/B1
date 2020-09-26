using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_7: MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private ChoiceManager theChoice;
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
        theChoice = FindObjectOfType<ChoiceManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        if (theDB.Find("M7"))
        {
            this.gameObject.SetActive(false);
        }
    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && theDB.Find("M6"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("M7");
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
        this.gameObject.SetActive(false);
    }
}
