using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NDialogueManager : MonoBehaviour
{
    public Text TalkText;
    public Text NameSpace;
    public GameObject talkPanel;
    public NTalkManager talkManager;
    public QuestManager questManager;
    public Image portraitImage;
    public AudioManager audioManager;

    private GameObject scanObject;
    private NDialogueManager instance;

    public bool isAction;
    public int talkIndex;
    public string sound;
    

    private void Awake()
    {
        if (instance == null)
            DontDestroyOnLoad(this.gameObject);
        else
            Destroy(this.gameObject);
    }

     void Start()
    {
        questManager.CheckQuest();
        audioManager = GetComponent<AudioManager>();
    }

    public void Action(GameObject scanObj)
    {
        scanObject = scanObj;
        audioManager.Play(sound);
        NDataBase database = scanObject.GetComponent<NDataBase>();
        Image portraidImage = portraitImage.GetComponent<Image>();
        Talk(database.id, database.isNpc);
        talkPanel.SetActive(isAction);
    }

    void Talk(int id, bool isNpc)
    {
        int questTalkIndex = questManager.GetQuestTalkIndex(id);//10,11,20,21

        string talkData = talkManager.GetTalk(id + questTalkIndex, talkIndex);
//                                                   id            , 0에서 ++ 
        //EndTalk
        if (talkData == null)
        {

            talkIndex = 0;
            isAction = false;
            Debug.Log(questManager.CheckQuest(id));
            // 작동안함 Debug.Log("ㄴㅇㄴ");
            return;
        }

        //Talk NPC
        if (isNpc)
        {
            Debug.Log(talkData);
            Debug.Log("id : " + id + "        questTalkIndex : "+questTalkIndex + "       talkIndex :"+talkIndex );
            TalkText.text = talkData.Split(':')[0];
            portraitImage.sprite = talkManager.GetPortrait(id, int.Parse(talkData.Split(':')[1]));
            portraitImage.color = new Color(1, 1, 1, 1);
            NameSpace.text = talkManager.GetName(id);

        }
        else//Talk Obj
        {
            NameSpace.text = "";
            TalkText.text = talkData;
            portraitImage.color = new Color(1, 1, 1, 0);
        }

        isAction = true;
        talkIndex ++;
    }
}
