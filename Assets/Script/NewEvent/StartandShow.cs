using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartandShow : MonoBehaviour
{
    private NDialogueManager theDialogue;
    private ChoiceManager theChoice;
    private bool flag;
    private bool checkChoice;

    // Start is called before the first frame update
    void Start()
    { 
        theDialogue = FindObjectOfType<NDialogueManager>();
        theChoice = FindObjectOfType<ChoiceManager>();
        StartCoroutine(DialogueCoroutine());
    }

    private void Update()
    {
      

        if (Input.GetKeyDown(KeyCode.Z) && !flag)
            if (theDialogue.Action(this.gameObject) == "대화 종료")
                flag = true;
    }

    IEnumerator DialogueCoroutine()
    {
        yield return new WaitForSeconds(1f);
        theDialogue.Action(this.gameObject);
    }

}
