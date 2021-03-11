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
     if(theQuest.CheckQuest()+theQuest.questActionIndex == triggerSceneName && !flag)
        {
            StartCoroutine(Go());
        }   
    }

    IEnumerator Go()
    {
        flag = true;
        StartCoroutine(TransferCoroutine());
        yield return new WaitUntil(()=> !base.thePlayer.notMove);
        Destroy(this.gameObject);
    }

}
