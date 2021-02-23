using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class NTalkManager : MonoBehaviour
{
    Dictionary<int, string[]> talkData;//실질적인 데이ㅣ터베이스..?
    Dictionary<int, string> nameData;
    Dictionary<int, Sprite> portraitData;
    Dictionary<int, Choice> choiceData;

    public Sprite[] portaritArr;

    private NTalkManager instance;
    //const string URL = "https://docs.google.com/spreadsheets/d/1ezu6SwtRKRhPwIq2cW92QUN2HOQGTbQKvg13g80Deyc/export?format=tsv";
    const string URL = "https://docs.google.com/spreadsheets/d/1ezu6SwtRKRhPwIq2cW92QUN2HOQGTbQKvg13g80Deyc/export?format=tsv&gid=1201976522&rangeA1:C5";

    int lineSize, rowSize;
    string[,] sentence;

    private void Awake()
    {
        if (instance == null)
            DontDestroyOnLoad(this.gameObject);
        else
            Destroy(this.gameObject);

        talkData = new Dictionary<int, string[]>();
        nameData = new Dictionary<int, string>();
        portraitData = new Dictionary<int, Sprite>();
        choiceData = new Dictionary<int, Choice>();
        GenerateData();
        //StartCoroutine(loadData());
    }


    IEnumerator loadData()
    {
        UnityWebRequest www = UnityWebRequest.Get(URL);
        yield return www.SendWebRequest();
    
        string data = www.downloadHandler.text;
        //Debug.Log(data);
        string[] line = data.Split('\n');
        lineSize = line.Length;
        rowSize = line[0].Split('\t').Length;
        sentence = new string[lineSize, rowSize];

        for (int i = 0; i <lineSize; i++)
        {
            string[] row = line[i].Split('\t');
            for (int j = 0; j < rowSize; j++)
            {
                sentence[i, j] = row[j];
            }
        }
//Debug.Log(sentence);    
    }

    void GenerateData()
    {


        //일반대사
        talkData.Add(1000, new string[] { "..... :10" });
        talkData.Add(2000, new string[] { "오늘따라 꽃향기가 좋군요:20" });

        //물건 조사
        talkData.Add(100, new string[] { "오 캡틴 마이 캡틴?" });
        talkData.Add(10000, new string[] { "너무 멀리 온 것 같다","...","되돌아가자" });
        talkData.Add(20000, new string[] { "고급지고 푹신해보이는 소파다.","음...", "앉기엔 너무 하얗다." });
        talkData.Add(20001, new string[] { "음...", "앉기엔 너무 하얗다." });
        talkData.Add(30000, new string[] { "빛이 너무 강해서 밖이 보이지 않는다","..?", "그게 가능한가?" });

        //QuestTalk (퀘스트 번호, 오브젝트 번호)
        // 인트로
        talkData.Add(1000 + 10, new string[] { 
            "동생과 연락이 끊긴 지 벌써 1년이 지났다.:11",
            "수소문해서 알게 된 이 저택. 부디 이곳에서는 동생을 찾을 수 있기를.....:11",
            "들어오시죠. 2층으로 안내하겠습니다.:20",
            "(내가 누군지 말하지도 않았는데...? 모든 일이 익숙한 듯 보인다.):11" 
        });
        //시나리오1
        talkData.Add(2000 + 20, new string[] {
            "안녕하세요. 저는 한도아라고 합니다.:10",
            "갑작스러운 걸 알지만.. 혹시 제 동생을 보신 적이 있으신가요?.:10",
            "이름은 한량이고, 저랑 무척 닮았어요.:10",
            "음...글쎄요..몇 년 전에 저택에서 잠깐 지낸 적은 있지만..:20",
            "그 이후에는 저조차 연락이 닿지 않아서요.:20",
            "(거짓말이다. 동생이 없어진지는 반년밖에 되지 않았어. 뭔가 수상해):10",
            "(동생의 흔적이 남은 곳. 이곳이 동생을 찾을 유일한 희망이야.):10",
            "(이곳에서 며칠 지낼 수 있냐고 물어볼까?):10"
        });
        //시나리오1 질문
        choiceData.Add(20 + 2000, new Choice("(이곳에서 며칠 지낼 수 있냐고 물어볼까?)", new string[] { "부탁한다", "부탁하지 않는다"}));
        //시나리오1 응답1
        talkData.Add(20 + 2000 + 100, new string[] {
            "혹시 이곳에서 며칠 지내며 동생을 찾을 수 있을까요?:10",
            "실례인걸 알지만..정말로 절박하거든요.:10",
            "....:20",
            "물론입니다. 손님방도 여러 개 있고..:20",
            "꽃은 많을 수록 좋으니까요.:20",
            "저택 안내는 라코스테가 해줄 겁니다.:20",
            "부디 편하게 계세요.:20"
        });
        //시나리오1 응답2
        talkData.Add(20 + 2000 + 200, new string[] {
            "(이제 어쩌지...이대로 동생을 포기할 수는 없어.):11",
            "혹시 괜찮으시다면, 저택에서 지내셔도 괜찮습니다.:20",
            "저희도 최대한 도울테니까요. 숙녀분이 찾는 게 무엇이든.:20",
            "감사합니다. 정말 친절하시네요.:10",
            "뭘요. 꽃은 많을 수록 좋으니까요.:20",
            "앉아 계세요. 라코스테가 곧 내려올 겁니다.:20",
        });

        //시나리오 2 - 라코스테 시나리오(규칙 볼 때까지 반복)
        talkData.Add(30 + 3000, new string[] { 
            "안녕! 네가 그 누굴 찾으러 왔다던...:30",
            "한도아야. 만나서 반가워.:10",
            "그래 그건 그렇고 말이야:30",
            "........?:11",
            "이 저택 너무 멋있지 않아? 집주인도 마찬가지고. :30"
        });
        choiceData.Add(30 + 3000, new Choice("이 저택 너무 멋있지 않아? 집주인도 마찬가지고. ",
            new string[] { "글쎄", "그러게" }));
        talkData.Add(100 + 30 + 3000, new string[] {
            "네가 세상을 아직 몰라서 그래. :30",
            "푸른 수염이 아니였다면 우리가 어떻게 이런 으리으리한 집에서 살 수 있겠어?:30",
            "네가 조금만 더 나이를 먹으면 날 이해하게 될거야.:30",
            "푸른 수염에게 감사하는 마음을 좀 가져보면 어때?:30",
            "...........:10",
            "크흠... 궁금한 게 있으면 물어봐도 좋아.:30"

        });

        talkData.Add(200 + 30 + 3000, new string[] {
            "그치. 난 이런 집을 가지기 위해서라면 뭐든 할거야.:30",
            "저택은 조금 둘러봤니?:30",
            "넌 아마 1층 가운데 방을 쓰게 되겠지. 네방 옆에 한량이 쓰던 방도 있어.:30",
            "2층은 로비와 다이닝룸, 갤러리가 있어.:30",
            "3층은 푸른수염이 단독으로 사용해. 서재랑 침실이 있을거야.:30",
            "궁금한 게 있으면 얼마든 물어봐. 이 집에 대해선 내가 가장 잘 아니까 :30"
        });

        talkData.Add(3000, new string[] { "저 벽에 액자 보이지? 읽어보는게 좋을걸.:30" }); //라코스테 기본대사

        talkData.Add(30 + 30001, new string[] { "암어 규칙쓰 >.0" });
        



        // 시나리오 1 응답 
        talkData.Add(10 + 1000+100, new string[] { "환영해:0" });
        talkData.Add(10 + 1000 + 200, new string[] { "어.. 그래:0" });
        talkData.Add(10 + 1000 + 300, new string[] { "뭐야 꺼져:0" });
        //시나리오 이후 기본대사
        talkData.Add(10 + 1000 +9, new string[] { "여기서 나가:0" });


        talkData.Add(11 + 2000, new string[] { "여기에 오면 어떡해:0", "도망쳐..:0" });
        //시나리오 2
       /* talkData.Add(20 + 1000, new string[] { "이걸로 경고는 두 번째야:0","좋은 말로 할 때 돌아가:2" });
        talkData.Add(20 + 5000, new string[] {"지하1층 버튼이다"});
        talkData.Add(21 + 2000, new string[] { "가라구:0", "가..:1" });
        */
        //시나리오 끗

        //초상화 이미지
        portraitData.Add(10+0,portaritArr[0]);
        portraitData.Add(10+1, portaritArr[1]);
        portraitData.Add(10+2, portaritArr[2]);
        portraitData.Add(20+0, portaritArr[3]);
        portraitData.Add(20+1, portaritArr[4]);
        portraitData.Add(20+2, portaritArr[5]);
        portraitData.Add(30+0, portaritArr[6]);

        nameData.Add(10, "한도아");
        nameData.Add(20, "푸른수염");
        nameData.Add(30, "라코스테");
        nameData.Add(40, "오필리어");

        
    }

     public string GetTalk(int id, int talkIndex)
    {
        //예외처리
        if (!talkData.ContainsKey(id))
        {
            Debug.Log(id - id % 10);
            //응급조치
            //return GetTalk(id - id % 100, talkIndex);//기본대사 출력

            if (!talkData.ContainsKey(id - id % 10))//퀘스트 맨 처음 대사가 없다.
            {
                return GetTalk(id - id % 100, talkIndex);//기본대사 출력
            }
            else
            { //다음 퀘스트 안내 출력해야함.
                return GetTalk(id - id % 10, talkIndex);
            }
        }

        if (talkIndex == talkData[id].Length)
            return null;
        else
            return talkData[id][talkIndex];
    }

    public Sprite GetPortrait(int portraitIndex)
    {
        return portraitData[portraitIndex];
    }
    
    public string GetName(int id)
    {
        return nameData[id];
    }

    public Choice GetChoice(int ChoiceNumber)
    {
        if (!choiceData.ContainsKey(ChoiceNumber))
        {
            //Debug.Log(ChoiceNumber + ":  선택지 없음");
            return null;
        }   
        else
            return choiceData[ChoiceNumber];
    }

    public void SkipTalking(int answerNum)
    {

    }
}
