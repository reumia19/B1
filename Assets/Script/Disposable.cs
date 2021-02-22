using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Disposable : MonoBehaviour
{
    public string activeScene;
    public GameObject disposableObject;

    QuestManager theQuest;
    private string beforeQuest;
    private void Awake()
    {
        theQuest = FindObjectOfType<QuestManager>();
        beforeQuest = theQuest.CheckQuest();
    }
    private void Update()
    {

        if (beforeQuest != theQuest.CheckQuest()) //일회용 오브젝트 && 시나리오 넘어감 
        {
            if (theQuest.CheckQuest() == activeScene)
                disposableObject.SetActive(true);
            else
                disposableObject.SetActive(false);
        }
    }
}
