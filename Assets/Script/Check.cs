using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Check : MonoBehaviour
{
    [SerializeField]
    public Dialogue dialogue;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private PlayerManager thePlayer;

    public bool flag;
    public string animDir;
    public float dir;


    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
    }
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) &&thePlayer.animator.GetFloat(animDir) == dir)
        {
            flag = true;
            StartCoroutine(EventCoroutine());

        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (flag)
        {
            StartCoroutine(ResetCoroutine());
        }
    }
    IEnumerator EventCoroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();

    }
    IEnumerator ResetCoroutine()
    {
        yield return new WaitForSeconds(0.5f);
        flag = false;
    }
}
