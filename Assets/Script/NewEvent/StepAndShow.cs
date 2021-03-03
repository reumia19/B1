using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StepAndShow : MonoBehaviour
{
    NDialogueManager theDialogue;
    public GameObject DBObject;
    void Start()
    {
        theDialogue = FindObjectOfType<NDialogueManager>();
    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
            theDialogue.Action(DBObject);
    }

/*   private void OnTriggerStay2D(Collider2D collision)
    {
        Debug.Log("접촉");
        if (Input.GetKeyDown(KeyCode.Z))
        {
            Debug.Log("키 누름");
            theDialogue.Action(this.gameObject);
        }
            
    }*/
   /* private void OnCollisionStay2D(Collision2D collision)
    {
        Debug.Log("접촉");
        if (Input.GetKeyDown(KeyCode.Z))
        {
            Debug.Log("키 누름");
            theDialogue.Action(this.gameObject);
        }
    }*/

}
