using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NDialogueManager : MonoBehaviour
{
    public NTypeEffect talk;
    public Text NameSpace;
    
    public NTalkManager talkManager;
    public QuestManager questManager;
    public Image portraitImage;
    public Animator portraitAnim;
    public Animator talkPanel;

    private GameObject scanObject;
    private NDialogueManager instance;

    public bool isAction;
    public int talkIndex;
    private Sprite prevPortrait;

    private void Start()
    {
        questManager.CheckQuest();

    }

    private void Awake() 
    {
        if (instance == null)
            DontDestroyOnLoad(this.gameObject);
        else
            Destroy(this.gameObject);
    }

    public void Action(GameObject scanObj)
    {
        scanObject = scanObj;
        NDataBase database = scanObject.GetComponent<NDataBase>();
        Image portraidImage = portraitImage.GetComponent<Image>();
        Talk(database.id, database.isNpc);
        talkPanel.SetBool("isShow",isAction);
        
    }

    void Talk(int id, bool isNpc)
    {
        int questTalkIndex = 0;
        string talkData = "";

        if (talk.isAnim) //대화 애니메이션 중일 때
        {
            talk.setMSG("");
            return;
        }
        else
        {
            questTalkIndex = questManager.GetQuestTalkIndex(id);//10,11,20,21
             talkData = talkManager.GetTalk(id + questTalkIndex, talkIndex);
            //                                     id            , 0에서 ++ 
        }

        //EndTalk
        if (talkData == null) // 
        {

            talkIndex = 0;
            isAction = false;
            Debug.Log(questManager.CheckQuest(id));
            return;
        }

        //Talk NPC
        if (isNpc)
        {
            talk.setMSG(talkData.Split(':')[0]);

            portraitImage.sprite = talkManager.GetPortrait(id, int.Parse(talkData.Split(':')[1]));
            portraitImage.color = new Color(1, 1, 1, 1);

            if(prevPortrait != portraitImage.sprite)
            {
                portraitAnim.SetTrigger("doEffect");
                prevPortrait = portraitImage.sprite;
            }
            
            NameSpace.text = talkManager.GetName(id);
         

        }
        else//Talk Obj
        {
            NameSpace.text = "";
            talk.setMSG(talkData);
            portraitImage.color = new Color(1, 1, 1, 0);
        }

        isAction = true;
        talkIndex ++;
    }
}
