using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Intro : MonoBehaviour
{
     NDialogueManager nDialogueManager;
     QuestManager quest;
    NDataBase data;

    public string nextQuestName;
    public GameObject transferOBJ;


    // Start is called before the first frame update
    void Start()
    {

        nDialogueManager = FindObjectOfType<NDialogueManager>();
        quest = FindObjectOfType<QuestManager>();
        data = FindObjectOfType<NDataBase>();
        nDialogueManager.Action(this.gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        
        Debug.Log(nextQuestName + " / " + quest.CheckQuest() );
        //다음 씬으로 가기
        if (quest.CheckQuest() == nextQuestName) { 
            transferOBJ.SetActive(true);
        }
        else if (Input.GetKeyDown(KeyCode.Z))
            nDialogueManager.Action(this.gameObject);
        
        
    }
}
 