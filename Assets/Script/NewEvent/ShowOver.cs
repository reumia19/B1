using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowOver : TransferScene
{
    public string[] EndingName;
    public int[] DialogueNumber;
    GameObject EndingCredit;
    DatabaseManager theDB;
    NDialogueManager theDialogue;
    QuestManager theQuest;
    NDataBase nData;

    bool flag = false;
    float resetCountDown = 10;

    // Start is called before the first frame update
    void Start()
    {
        base.Start();

        theDB = FindObjectOfType<DatabaseManager>();
        theDialogue = FindObjectOfType<NDialogueManager>();
        theQuest = FindObjectOfType<QuestManager>();
        nData = this.GetComponent<NDataBase>();

        for(int i = 0; i<EndingName.Length; i++)
        {
            if (theDB.Find(EndingName[i])){
                nData.id = DialogueNumber[i];
                break;
            }
        }
        theDialogue.Action(this.gameObject);
        
    }

    // Update is called once per frame
    void Update()
    {
        if(resetCountDown < 0)
        {
            Reset();
            //데이터베이스 초기화, 
            //퀘스트 초기화
            StartCoroutine(TransferCoroutine());
        }

        if (flag)
        {
            resetCountDown = resetCountDown - Time.deltaTime;
            Debug.Log("카운트다운 : "+resetCountDown);
;            return;
        }

        if (Input.GetKeyDown(KeyCode.Z)&& !flag)
        {
            if (theDialogue.Action(this.gameObject) == "대화 종료")
            {
                flag = !flag;
                EndingCredit.SetActive(true);
            }
        }

       
    }

    private void Reset()
    {
        theQuest.Reset();
        theDB.Reset();
    }
}
