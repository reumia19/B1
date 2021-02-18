using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestManager : MonoBehaviour
{
    public int questId;
    public int questActionIndex;
    public GameObject[] questObject;

    Dictionary<int, QuestData> questList;
    // Start is called before the first frame update
    private void Awake()
    {
        questList = new Dictionary<int, QuestData>();
        GenerateData();
    }
    void GenerateData()
    {//       questId ▽                       questActionIndex    0    1
        questList.Add(10, new QuestData("시나리오_1", new int[] {1000, 2000}));
        questList.Add(20, new QuestData("시나리오_2", new int[] { 1000, 5000, 2000 }));
        questList.Add(30, new QuestData("시나리오_끗", new int[] {0}));
        Debug.Log(questList[10].npcId[0]);
    }

    public int GetQuestTalkIndex(int id)
    {
        return questId + questActionIndex;
    }

    public string CheckQuest(int id)
    {
        
        //id가 현재 퀘스트id의 퀘스트 액션 인덱스의 인물과 일치하면 액션 넘버를 넘긴다
        if (id == questList[questId].npcId[questActionIndex])
        {
            questActionIndex++;
            
        }

        ControlObject();

        //퀘스트 액션 인덱스가 현제 시나리오의 npcid 수와 같을 때
        if (questActionIndex == questList[questId].npcId.Length)
            NextQuest();

        return questList[questId].questName;
    }
    public string CheckQuest()
    {
        return questList[questId].questName;
    }
    public void SkipQuest(int answerNum)
    {
        questId += answerNum;
    }

    void NextQuest()
    {
        questId += 10;
        questActionIndex = 0;
    }

    void ControlObject()
    {
        switch (questId)
        {
            case 10:
                if(questActionIndex == 2)
                {
                    questObject[0].SetActive(true);
                }
                break;
            case 20:
                if(questActionIndex == 1)
                {
                    questObject[0].SetActive(false);
                }

                break;
        }
    }
}
