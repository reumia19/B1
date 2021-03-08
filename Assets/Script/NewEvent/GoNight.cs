using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoNight : TransferScene
{
    QuestManager theQuest;
    public string triggerSceneName; 
    void Start()
    {
        base.Start();
        theQuest = FindObjectOfType<QuestManager>();    
    }
    

    // Update is called once per frame
    void Update()
    {
     if(theQuest.CheckQuest()+theQuest.questActionIndex == triggerSceneName)
        {
            StartCoroutine(TransferCoroutine());
        }   
    }

}
