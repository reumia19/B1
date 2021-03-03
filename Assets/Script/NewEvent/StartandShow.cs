using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartandShow : MonoBehaviour
{
    private NDialogueManager theDialogue;
    // Start is called before the first frame update
    void Start()
    {
        theDialogue = FindObjectOfType<NDialogueManager>();
        theDialogue.Action(this.gameObject);
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Z))
            theDialogue.Action(this.gameObject);
    }
}
