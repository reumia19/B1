using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Disposable : MonoBehaviour
{
    public string[] activeScene;
    public GameObject disposableObject;

    QuestManager theQuest;
    private string beforeQuest;
    private void Start()
    {
        theQuest = FindObjectOfType<QuestManager>();
        beforeQuest = theQuest.CheckQuest()+ theQuest.questActionIndex;
        disposableObject.SetActive(checkActive(beforeQuest));

    }
    private void Update()
    {
        string thisQuest = theQuest.CheckQuest() + theQuest.questActionIndex;

        if (beforeQuest != thisQuest) //일회용 오브젝트 && 시나리오 넘어감 
        {
            disposableObject.SetActive(checkActive(thisQuest));
            beforeQuest = thisQuest;

            Debug.Log(this.gameObject.name + "   Toggled");
        }
    }
    private bool checkActive(string quest)
    {
        bool act = false;

        for (int i = 0; i < activeScene.Length; i++)
        {
            if (activeScene[i] == quest)
            {
                act = true;
                break;
            }
        }

        return act;
    }


}
