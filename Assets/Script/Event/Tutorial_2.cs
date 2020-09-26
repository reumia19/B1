using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tutorial_2 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    public bool flag;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private BGMManager theBGM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theBGM = FindObjectOfType<BGMManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat("DirY") == -1&& theDB.Find("T1"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("T2");
        }

    }

    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theBGM.Stop();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        this.gameObject.SetActive(false);

    }


}
