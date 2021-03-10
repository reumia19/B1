using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoNight : TransferScene
{
    QuestManager theQuest;
    public string triggerSceneName;
    private bool flag = false;
    void Start()
    {
        base.Start();
        theQuest = FindObjectOfType<QuestManager>();    
    }
    

    // Update is called once per frame
    void Update()
    {
     if(theQuest.CheckQuest()+theQuest.questActionIndex == triggerSceneName || !flag)
        {
            flag = true;
            StartCoroutine(TransferCoroutine());
        }   
    }

}
