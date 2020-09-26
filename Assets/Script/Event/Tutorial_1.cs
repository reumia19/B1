using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutorial_1 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    public bool flag;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private DatabaseManager theDB;

    // Start is called before the first frame update
    void Start()
    {

        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag)
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("T1");
        }
    }
    IEnumerator Event1Coroutine()
    {
        //theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        
        this.gameObject.SetActive(false);

    }

}
