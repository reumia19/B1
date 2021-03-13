using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StepAndShow : MonoBehaviour
{
    NDialogueManager theDialogue;
    public GameObject DBObject;
    private bool collide;
    private bool flag;
    void Start()
    {
        flag = false;
        theDialogue = FindObjectOfType<NDialogueManager>();
    }

    private void Update()
    {
        if(collide&&Input.GetKeyDown(KeyCode.Z)&& !flag) if (theDialogue.Action(DBObject) == "대화 종료") flag = true;
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        theDialogue.Action(DBObject);
         collide = true;
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        collide = false;
    }
}
