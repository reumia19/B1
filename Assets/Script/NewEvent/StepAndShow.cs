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

}
