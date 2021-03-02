using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Disposable : MonoBehaviour
{
    public string[] activeScene;
    public GameObject disposableObject;

    QuestManager theQuest;
    private string beforeQuest;
    private bool active;
    private void Awake()
    {
        theQuest = FindObjectOfType<QuestManager>();
        beforeQuest = theQuest.CheckQuest()+ theQuest.questActionIndex;
    }
    private void Update()
    {
        string thisQuest = theQuest.CheckQuest() + theQuest.questActionIndex;
        if (beforeQuest != thisQuest) //일회용 오브젝트 && 시나리오 넘어감 
        {
            active = false;

            for (int i = 0; i < activeScene.Length; i++) {
                if (activeScene[i] == thisQuest) {
                    active = true;
                    break;
                 }
             }

            disposableObject.SetActive(active);
        }
    }
}
