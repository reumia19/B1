using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event2 : MonoBehaviour
{
    [SerializeField]

   // public Choice choice1;
    public Dialogue dialogue1;
    //public Dialogue dialogue2;
    public string animDir;
    public float dir;
    
    private ChoiceManager theChoice;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private PlayerManager thePlayer;


    // public string footStep_0;
    public bool flag;

    void Start()
    {
        theChoice = FindObjectOfType<ChoiceManager>();
        theOrder = FindObjectOfType<OrderManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDM = FindObjectOfType<DialogueManager>();

    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z)&& thePlayer.animator.GetFloat(animDir) == dir)
        {
            flag = true;
            StartCoroutine(EventCoroutine());

        }
    }

    IEnumerator EventCoroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
       // theChoice.ShowChoice(choice1);
       // yield return new WaitUntil(() => !theChoice.choicing);
       // theDM.ShowDialogue(dialogue2);
       // yield return new WaitUntil(() => !theDM.talking);
        theOrder.Move();

    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        flag = false;
    }
}
