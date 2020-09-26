using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_11: MonoBehaviour
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

    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir && theDB.Find("M10"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
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
