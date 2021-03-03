using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NDialogueManager : MonoBehaviour
{
    
    public Text NameSpace;
    
    NTalkManager talkManager;
    QuestManager questManager;
    ChoiceManager choiceManager;
    DatabaseManager theData;
    NTypeEffect talk;

    public Image portraitImage;
    public Animator portraitAnim;
    public Animator talkPanel;

    private GameObject scanObject;
    private NDialogueManager instance;

    public bool isAction;
    public int talkIndex;
    private Sprite prevPortrait;
    public bool answerTurn;
    public int answerNum;
    public int answerCount;

    private int portraitNumber;

    private void Start()
    {
        theData = FindObjectOfType<DatabaseManager>();
        choiceManager = FindObjectOfType<ChoiceManager>();
        questManager = FindObjectOfType<QuestManager>();
        talkManager = FindObjectOfType<NTalkManager>();
        talk = FindObjectOfType<NTypeEffect>();
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
        int talkNumber = 0;

        if (talk.isAnim) // 대화창이 떠있을 때
        {
            talk.setMSG(""); // 공백을 쏴준다. 그럼 모든 텍스트를 한 번에 띄울거임
            return;
        }
        else
        {
            if (choiceManager.choicing) //초이스 중이면 나가기
            {
                Debug.Log("선택중");
                return;
            }
                
            answerNum = 0;
            if (answerTurn) //대답할 차례인지 체크
            {
                answerNum = (choiceManager.GetResult() + 1) * 100 + answerCount * 400;
                Debug.Log("answerNum : " + answerNum);
               // questManager.CheckQuest(id); // 대답하면 퀘스트 체크하기
            }
            questTalkIndex = questManager.GetQuestTalkIndex(id);
            talkNumber = id + questTalkIndex + answerNum;
             talkData = talkManager.GetTalk(talkNumber, talkIndex); //  대사 호출하기 
            theData.Change(talkNumber.ToString());
        }

        //EndTalk 끝나는 부분에만 실행
        if (talkData == null) //대사를 호출했는데 없다? 널 값이 들어온다? 
        {
            Debug.Log("null 들어옴");
            if (talkManager.GetChoice(talkNumber) != null)//선택지가 있는지 확인해서 있으면 실행
            {
                choiceManager.ShowChoice(talkManager.GetChoice(talkNumber));
                if (answerTurn)
                {
                    answerCount++;
                    Debug.Log("! add answer count !     answerCount :"+ answerCount);
                }else
                    answerTurn = true;
            }
            else
            {
                answerTurn = false;
                answerCount = 0;
                isAction = false;
                //이거 지우면 안 됨..!!! 다음 퀘스트로 안 넘어감
                questManager.CheckQuest(id);
                Debug.Log(questManager.CheckQuest() + questManager.questActionIndex);
            }

            talkIndex = 0;
            return;
        }
        
        //Talk NPC
        if (isNpc) // 초상화 이미지는 캐릭터 번호 + 표정번호    // 이름은 캐릭터 번호만을 사용함
        {
            talk.setMSG(talkData.Split(':')[0]);
            portraitNumber = int.Parse(talkData.Split(':')[1]);
            portraitImage.sprite = talkManager.GetPortrait(portraitNumber);
            portraitImage.color = new Color(1, 1, 1, 1);

            if(prevPortrait != portraitImage.sprite)
            {
                portraitAnim.SetTrigger("doEffect");
                prevPortrait = portraitImage.sprite;
            }
            Debug.Log((portraitNumber / 10) * 10);
            NameSpace.text = talkManager.GetName((portraitNumber/10)*10);
         

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
