﻿using System.Collections;
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
    private QuestManager theQuest;
    private NDialogueManager theDialogue;
    //const string URL = "https://docs.google.com/spreadsheets/d/1ezu6SwtRKRhPwIq2cW92QUN2HOQGTbQKvg13g80Deyc/export?format=tsv";
    const string URL = "https://docs.google.com/spreadsheets/d/1ezu6SwtRKRhPwIq2cW92QUN2HOQGTbQKvg13g80Deyc/export?format=tsv&gid=1201976522&rangeA1:C5";

    int lineSize, rowSize;
    string[,] sentence;
    public bool kor;

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
        theQuest = FindObjectOfType<QuestManager>();
        theDialogue = FindObjectOfType<NDialogueManager>();
        if (kor)
            GenerateKorData();
        else
        GenerateEngData();
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
    void GenerateEngData()
    {
        //QuestTalk (퀘스트 번호, 오브젝트 번호)
        // 인트로
        talkData.Add(1000 + 10, new string[] {
            "It's been a year since I lost contact with my sister.:11",
            "After asking around, I found this mansion. Hope she's here....:11",
            "Please, come on in. I'll take you to the second-floor lobby.:20",
            "(That's weird. Everything seems familiar to him. Like he knows who I am...):11"
        });
        //시나리오1
        talkData.Add(2000 + 20, new string[] {
            "Nice to meet you. I'm Pandora. :10",
            "I know it's sudden, but have you happen to see my sister?:10",
            "Her name is Mollie. She looks very much like me.:10",
            "Well...stayed here for a while a few years ago.:20",
            "But, I had no contact with her ever since then.:20",
            "(Lying. She's been missing for only half a year. Something's suspicious.):10",
            "(This is the only place where I can trace her. It's my only hope.):10",
            "(Should I ask him if I could stay here for a while?):10"
        });
        //시나리오1 질문
        choiceData.Add(20 + 2000, new Choice("(Should I ask him if I could stay here for a while?)", new string[] { "Ask him.", "Don't ask" }));
        //시나리오1 응답1
        talkData.Add(20 + 2000 + 100, new string[] {
            "Is it okay for me to stay here for a while?:10",
            "I know it's a nuisance, but I'm desperate to find my sister. :10",
            "....:20",
            "Sure yes. There are plenty of guest rooms. :20",
            "The more flowers, the better it is. Don't you agree?:20",
            "Sebasitian will guide you through the mansion. :20",
            "Make yourself at home.:20"
        });
        //시나리오1 응답2
        talkData.Add(20 + 2000 + 200, new string[] {
            "(What now...I can't give up on her like this.):11",
            "If you don't mind, you can stay here.:20",
            "We'll do our best to help you, my lady. Whatever that you need, just tell us.:20",
            "Thanks. That's so nice of you.:10",
            "It's my pleasure. The more flowers, the better it is.                              :20",
            "Have a seat. Sebatiain will be here soon.:20",
        });

        //시나리오 2
        talkData.Add(30 + 3000, new string[] {
            "Hi! You must be the one looking for...:30",
            "I'm Pandora. Good to see you.:10",
            "Hey, anyway,:30",
            "........?:11",
            "Isn't this mansion so nice? as well as the house owner.  :30"
        });
        choiceData.Add(30 + 3000, new Choice("Isn't this mansion so nice? as well as the house owner.  ",
            new string[] { "Well...", "Indeed." }));
        talkData.Add(100 + 30 + 3000, new string[] {
            "You don't know anything, huh? :30",
            "When will we ever have a chance to stay in this such magnificent house without his generosity?:30",
            "You'll understand what I mean when you get older.:30",
            "Why don't you thank him, now ey?:30",
            "...........:10",
            "크흠... 궁금한 게 있으면 물어봐도 좋아.:30"

        });

        talkData.Add(200 + 30 + 3000, new string[] {
            "You're right. I would do anything to live in a mansion like this.:30",
            "Have you seen through the mansion yet?:30",
            "You'll be using the room in the middle on the 1st floor. 한량 stayed in the next room.:30",
            "There is a lobby, a dining room, and a gallery on the 2nd floor.:30",
            "The house-owner uses the third floor alone. There should be a library and a bedroom.:30",
            "명심하자. 집주인이 사용하는 3층은 각별히 조심해야겠어. :10",
            "So, what is this house-owner like? :10",
            "OMG. I can't believe I left out the most important part. :30",
            " He is the most important being for the mansion and even the world.:30",
            "There are rumors that he was a royal or a member of a mafia. :30",
            "Well, I think, it’s more that he was a German spy during the war. :30",
            "(쓸모있는 대답은 아니군.):10",
            "하하. 농담이야. :30",
            "가끔 무섭지만 대체로 자상하고, 규칙을 중요하게 여기지.:30",
            "너도 그를 사랑하게 될거야. :30",
            "자! 한 번 둘러봐봐. 궁금한 게 있다면 언제든지 물어봐도 좋아! :30"
        });

        talkData.Add(3000, new string[] { "저 벽에 액자 보이지? 읽어보는게 좋을걸.:30" }); //라코스테 기본(고유)대사

        talkData.Add(40 + 30000, new string[] { "'첫번째, 지하실에 들어가지 않는다.'", "'두번째, 밤 늦게 돌아다니지 않는다.'라고 적혀있다." });

        talkData.Add(40 + 3000, new string[] {
            "벽에 규칙이 적혀있던데, 규칙을 어기면 어떻게 되는거야?:10",
            "규칙을 어겨본 적이 없어서 잘 모르겠네. :30",
            "설마 집주인을 배신할 생각은 아니지?:30",
            "푸른수염은 생각보다 더 무서운 사람이거든.:30",
            "벽에 적힌 규칙을 명심해!:30",
            "1층의 네 방으로 가봐. 엘레베이터는 나가서 왼쪽에 있어. :30",

        });



        portraitData.Add(10 + 0, portaritArr[0]);
        portraitData.Add(10 + 1, portaritArr[1]);
        portraitData.Add(10 + 2, portaritArr[2]);
        portraitData.Add(20 + 0, portaritArr[3]);
        portraitData.Add(20 + 1, portaritArr[4]);
        portraitData.Add(20 + 2, portaritArr[5]);
        portraitData.Add(30 + 0, portaritArr[6]);

        nameData.Add(10, "한도아");
        nameData.Add(20, "푸른수염");
        nameData.Add(30, "라코스테");
        nameData.Add(40, "오필리어");
    }
    
    void GenerateKorData()
    {

        TestData();

        //일반대사
        talkData.Add(1000, new string[] { "..... :10" }); //없으면 오류나서 넣어둔 것..
        talkData.Add(2000, new string[] { "오늘따라 꽃향기가 좋군요:20" });

        //물건 조사
        talkData.Add(100, new string[] { "오 캡틴 마이 캡틴?" });
        talkData.Add(10000, new string[] { "너무 멀리 온 것 같다","...","되돌아가자" });
        talkData.Add(20000, new string[] { "고급지고 푹신해보이는 소파다.","음...", "앉기엔 너무 하얗다." });
        talkData.Add(20001, new string[] { "음...", "앉기엔 너무 하얗다." });
        talkData.Add(25000, new string[] { "빛이 너무 강해서 밖이 보이지 않는다","..?", "그게 가능한가?" });
        talkData.Add(30000, new string[] { "'첫번째, 지하실에 들어가지 않는다.'", "'두번째, 밤 늦게 돌아다니지 않는다.'라고 적혀있다." });
        talkData.Add(30001, new string[] { "파리도 미끄러지겠어." });

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
            "명심하자. 집주인이 사용하는 3층은 각별히 조심해야겠어. :10",
            "집주인은 어떤 사람이야? :10",
            "맙소사. 가장 중요한 걸 잊어버리다니. :30",
            " 그는 이 저택에서,  그리고 이 세계에서 제일 중요한 사람이지.:30",
            "그가 왕족이었다는 소문도 있고, 누구는 그가 마피아라고도 해. :30",
            "(쓸모있는 대답은 아니군.):10",
            "하하. 농담이야. :30",
            "가끔 무섭지만 대체로 자상하고, 규칙을 중요하게 여기지.:30",
            "너도 그를 사랑하게 될거야. :30",
            "자! 한 번 둘러봐봐. 궁금한 게 있다면 언제든지 물어봐도 좋아! :30"
        });

        talkData.Add(40 + 3000, new string[] { "저 벽에 액자 보이지? 읽어보는게 좋을걸.:30" }); //라코스테 기본(고유)대사

        talkData.Add(40 + 30000, new string[] { "'첫번째, 지하실에 들어가지 않는다.'","'두번째, 밤 늦게 돌아다니지 않는다.'라고 적혀있다."});

        talkData.Add(50 + 3000, new string[] {
            "벽에 규칙이 적혀있던데, 규칙을 어기면 어떻게 되는거야?:10",
            "규칙을 어겨본 적이 없어서 잘 모르겠네. :30",
            "설마 집주인을 배신할 생각은 아니지?:30",
            "푸른수염은 생각보다 더 무서운 사람이거든.:30",
            "벽에 적힌 규칙을 명심해!:30",
            "1층의 네 방으로 가봐. 엘레베이터는 나가서 왼쪽에 있어. :30",

        });

        //장소별 대사
        talkData.Add(1000+51, new string[] {
            "여기서 지내게 되겠구나:10",
            "예상보다는 더 괜찮은데.:10"
        });
        talkData.Add(52 + 1000, new string[] {
            "(이럴 시간이 없어. 동생의 흔적을 찾아보자)"
        });

        talkData.Add(1063, new string[] {
            "(여긴 라코스테의 방이겠구나.):10"
        });

        talkData.Add(1064, new string[] {
            "(여기가 동생이 지내던 방인가?):10",
            "(단서가 있을지도 몰라. 어서 찾아보자):10"
        });

        //저택 조사 

        //라코스테 분홍색 시나리오는 다 60번 데이터베이스 모두 채우면 한꺼번에 체크할것
        talkData.Add(60 + 3100, new string[] {
            "안녕! 규칙을 잊어버리지는 않았지? 이 저택의 첫번째 규칙은.....:30",
            "기억하고 있어.:10"
        });

        choiceData.Add(60 + 3100, new Choice("이 집의 첫 번째 규칙은...", new string[] { "지하실에 들어가지 않는다.", "이 저택에 대해 말하지 않는다." }));

        talkData.Add(60 + 3100 + 100, new string[] {
            "지하실에 들어가지 않는다.:10",
            "맞지?:10",
            "역시 정확해.:30",
            "두번째 규칙도 혹시 기억해?:30"
        });

        choiceData.Add(60 + 3100 +100, new Choice("이 집의 두 번째 규칙은...", new string[] { "시끄럽게 굴지 않는다.", "밤에 돌아다니지 않는다." }));

        talkData.Add(60 + 3100 + 500, new string[] { ///이거 수정해야한다. 선택 중첩의 경우 만들것.
            "시끄럽게 굴지 않는다:10",
            "아쉽네. 즐거운 대화였어. 안녕:30"
        });
        talkData.Add(60 + 3100 + 600, new string[] { ///이거 수정해야한다. 선택 중첩의 경우 만들것. //가정 마지막번호  - 3660 
            "밤에 돌아다니지 않는다.:10",
            "와! 정답이야.:30",
            "네 동생도 너와 닮았다면 참 좋았을텐데.:30",
            "그게 무슨 소리야?:10",
            "......:30",
            "아무것도 아니야.:30",
            "난 네가 정말 마음에 드니까 힌트를 줄게.:30",
            "집 구조를 잘 외워두는 게 좋을거야. 몇 층에 누구 방이 있는지..그런 것들 말이야.:30",
            "즐거운 대화였어. 안녕.:30",

        });

        talkData.Add(60 + 3100 + 200, new string[] {
            "이 저택에 대해 말하지 않는다.:10",
            "아쉽네. 덕분에 즐거웠어. 안녕.:30",
            "내 방에 찾을 건 없겠지만, 뒤져는 보시던가.:30"
        });
        //여기부터 추가대사
        talkData.Add(60 + 3100 + 700, new string[] { //3760
            "웽알_1.:30"
        });
        

        //푸른수염 갤러리 대사
        talkData.Add(60 + 2001 , new string[] {
            "이 그림으로 말할 것 같으면, 라파엘 전파 대표적 화가 존 에머렛 밀레이가 그린 그림으로....:20",
            "셰익스피어의 작품 햄릿을 모티브로 한 작품이죠. 그렇지 않나요?:10",
            "...이 그림, 어떤 것 같아요?:20"
        });
        choiceData.Add(60 + 2001, new Choice("(뭐라고 말해야 할까)", new string[] { "글쎄요.", "아름다워요." }));
        talkData.Add(60 + 2001 + 100, new string[] {
            "글쎄요.:10",
            "절박해 보여요. 불행해보이고. 금방이라도 녹을 것 같아요.:10",
            "원작에서는 아무 비중 없던 오필리어가 죽음의 순간에야 그림으로 남겨졌다는 것도.:10",
            "비극이 따로 없죠.:10",
            "........:20",
            "흥미로운 접근이군요. 잘 들었습니다.:20"
        });

        talkData.Add(60 + 2001 + 200, new string[] {
            "아름다워요.:10",
            "유명한 작품이잖아요. 엄청 비쌀테고.:10",
            "마음에 드신다니 다행이네요. 저는 저 표정을 아주 사랑해요.:20",
            "모든 걸 체념하고 자신의 운명을 받아들이는..숭고함이라니.:20"
        });

        talkData.Add(2361, new string[] {
            "좀 웃어보는 건 어때? 훨씬 예뻐보일 것 같은데.:20"
        });

        //푸른수염 서재 대사
        talkData.Add(60 + 2000, new string[] {
            "책이 아주 많네요. 혹시 무슨 일을 하시는지 여쭤도 될까요?:10",
            "저는 조향사입니다.:20",
            "완벽한 향을 찾기위해 하나 둘 공부하다보니..이렇게 큰 서재가 만들어졌네요.:20",
            "(조향사라니.. 꽤나 특이한 직업이네):10"
        });

        //지하1층
        talkData.Add(5000, new string[] {
            "(버튼 불은 분명히 꺼져있었는데. 그래도 지하실에 내려올 수 있구나.)",
            "(문이 보인다. 들어가볼까?)"
        });
        choiceData.Add(5000, new Choice("(문이 보인다. 들어가볼까?)", new string[] { "(들어가보자.)", "(불안해.)" }));
        talkData.Add(5100, new string[] {
            "(들어가보자.)"
        });
        talkData.Add(5200, new string[] {
            "(불안해.)",
            "(지금은 아무것도 아는게 없잖아. 나중에 기회를 살피자.)"
        });

        // 밤으로 변경
        talkData.Add(70+ 2000, new string[] {
            "이제 너무 늦었네요. 저택을 돌아다니느라 피곤하실 테니 일찍 들어가 쉬세요.:20"
        });

        choiceData.Add(70 + 2000, new Choice("(어떻게 할까)", new string[] { "배려해주셔서 감사해요", "괜찮아요. 평소에도 늦게 자는 편이거든요" }));
        talkData.Add(70 + 2000+100, new string[] {
            "배려해주셔서 감사해요. 오늘 감사했습니다.:10"
        });
        talkData.Add(70 + 2000 + 200, new string[] {
            "괜찮아요. 평소에 늦게 자는 편이거든요.:10",
            "저택의 밤은 빨리 어두워진답니다.:20",
            "여성분이 늦게 돌아다니게 둘 수는 없죠. 위험하잖아요.:20",
        });

        //밤 시작
        talkData.Add(71 + 1000, new string[] {
            "(어쩌다 보니 방으로 들어와버렸네.):10",
            "(이대로 하루를 헛되이 보낼 수는 없어.):10"
        });
        choiceData.Add(71 + 1000, new Choice("(밖으로 나가볼까? 아님 내일 할까?)", new string[] { "(오늘 먼 곳을 오느라 너무 피곤했어. 이만 침대로 가자)","(나가보자)" }));
        talkData.Add(71 + 1000+100, new string[] {
            "이게 무슨 소리지? 내가 잘못 들은 걸까?:10",
            "이대로 잘 수는 없어. 밖으로 나가자:10",
            "(들키지만 않으면 별 문제 없을거야.):10",
            "(조심해. 정신차리자.):10",
            "(너무 어두워. 아까 서재에서 전등을 봤어. 잠깐 빌리자.):10"
        });
        talkData.Add(71 + 1000 + 200, new string[] {
            "(나가보자.):10",
            "(들키지만 않으면 별 문제 없을거야.):10",
            "(조심해. 정신차리자.):10",
            "(너무 어두워. 아까 서재에서 전등을 봤어. 잠깐 빌리자.):10"
        });

        //서재
        talkData.Add(10000 + 100 + 1, new string[] { "(푸른 수염이 받은 상들이 전시돼있어. S대 동문회 부회장, H고 동창회 회장, R 향우회 회장....많기도 해라.)" });
        talkData.Add(10000 + 100 + 2, new string[] { "(책이 아주 많아. 모두 읽어봤을까?)" });
        talkData.Add(10000 + 100 + 3, new string[] { "(유기화학, My friends Dahmer, A father's story... 다양한 책들이 있어.)" });
        talkData.Add(10000 + 100 + 4, new string[] { "(지나치게 수도세가 많이 나오네. 왠지 수상한걸? 기억해두자.)" });
        talkData.Add(10000 + 100 + 5, new string[] { "어딘가 전등이 있을 거야. 들키지 않게 조심하자" });
        talkData.Add(10000 + 100 + 6, new string[] {
            "(전등을 찾았다. 아까 한량의 방에서 찾은 쪽지에 뭐라고 적혀있더라? 분명 힌트가 있을거야.)"
        });

        //침실
        talkData.Add(10000 + 90 + 1, new string[] { "(창문도 없는데 커텐은 왜 있는거지?)" });
        talkData.Add(10000 + 90 + 2, new string[] { "(푸른 수염의 침대야. 흰 침구는 관리하기 힘들텐데. 누가 하는 걸까?)" });
        talkData.Add(10000 + 90 + 3, new string[] { "(푸른 수염의 서랍이야. 별 건 없어.)" });

        //복도
        talkData.Add(10000 + 80 + 1, new string[] { "(커다랍 서랍이야. 동물 한 마리 쯤은 가뿐히 들어갈 수 있을 것 같은 걸.)" });
        //갤러리
        talkData.Add(10000 + 70 + 1, new string[] { "(뱀이 사과를 감싸고 있는 조각상이야. 불길한 느낌이 들어.)" });
        //식당
        talkData.Add(10000 + 60 + 1, new string[] { "(민트초코 푸딩이야. 이런 걸 누가 먹지?)" });
        talkData.Add(10000 + 60 + 2, new string[] { "(맛있겠다. 근데 벌레는 안 꼬이나?)" });
        talkData.Add(10000 + 60 + 3, new string[] { "(의자가 너무 무거워. 옮길 수는 없을 것 같아.)" });
        //한량 방
        talkData.Add(10000 + 30 + 1, new string[] { "(화장대야. 특별한 건 없어.)" });
        talkData.Add(10000 + 30 + 2, new string[] { "(진짜같은 조화야.)" });
        talkData.Add(10000 + 30 + 3, new string[] { "(화장대야. 특별한 건 없어.)" });
        talkData.Add(10000 + 30 + 4, new string[] { "(아까는 못 본 종이야. Night, Hamlet이라고 적혀있어. 무슨 의미일까?)" });
        talkData.Add(10000 + 30 + 5, new string[] { "(분홍색 매니큐어야. 동생이 좋아하던 색이야. 동생이 너무 보고싶어.)" });
        //라코스테방
        talkData.Add(10000 + 20 + 1, new string[] { "(라코스테는 게임을 좋아하는구나.)" });
        talkData.Add(10000 + 20 + 2, new string[] { "(라코스테 방에는 덩굴들이 많구나.)" });
        //지하실
        talkData.Add(10000 + 120 + 1, new string[] { "(HCL, H2SO4...화학약품들이야. 모두 향수를 만들 때 사용되는 걸까?)" });
        talkData.Add(10000 + 120 + 2, new string[] { "(강력접착제, 실, 깃털들이야. 안 어울리는 조합인걸)" });
        talkData.Add(10000 + 120 + 3, new string[] { "(끈들이 어지럽게 널부러져있어. 왜 끈이 여기 있지..)" });
        talkData.Add(10000 + 120 + 4, new string[] { "(이...이건 뭐야!)" });
        talkData.Add(10000 + 120 + 5, new string[] { "(대용량 락스야.)" });
        talkData.Add(10000 + 120 + 6, new string[] { "(여기 왜 욕조가 있지?)" });


        //시나리오 끗



        //게임오버 및 엔딩
        talkData.Add(50000, new string[]  //GameOver_01
        {
            "지하실에서는 끔찍한 악취가 났다.",
            "앞이 보이지 않는 깜깜한 어둠 속에서 무언가 나를 덮쳤고, 그대로 정신을 잃었다.",
            "\"네 동생보다는 똑똑할 줄 알았는데 말이야.\"",
            "말을 하고 싶었지만 몸이 말을 듣지 않았다.",
            " \"완벽한 향을 위해 희생하는 건 영광스러운 일이야. 그렇지 않아?\"",
            "\"네 동생..그 멍청한 년도 지하실에 들어왔다가 개죽음을 당했지.\"",
            "\"네 동생을 만나면 안부 전해줘.  그럼 안녕.\""
        });

        talkData.Add(50000+1, new string[] //GameOver_02
        {
            "어이없게도 난 푸른수염의 침실을 열어버렸고, 저항할 새도 없이 급소를 맞고 말았다.",
            " 애써 살려달라고 비명을 질렀지만 아무도 도와주지 않았다. 이대로 나는 죽는걸까.."
        });

        talkData.Add(50000 + 2, new string[] //GameOver_04
        {
            "이 빌어먹을 저택에 오지 말았어야 했다. 지금 후회해봐야 소용없겠지."
        });

        talkData.Add(50000 + 3, new string[] //GameEnding_01
        {
            "갑자기 전등이 꺼졌고, 집주인은 강제로 날 지하실로 데려갔다. 있는 힘껏 저항하고, 집주인의 팔을 깨물었다.",
            "\"헛짓거리 하지 말고 가만히 있어. 아프지 않게 보내줄 테니.\"", 
            "다행히 나의 신고로 경찰이 도착하며 집주인, 푸른 수염으로부터 벗어날 수 있었다.",
            "\"속보입니다. 한 도심 주택에서 세입자 여성을 연속 살해 및 시체를 유기한 사건이 밝혀져 화제입니다.\"",
            "\"화학약품과 수도시설을 이용해 시체를 처리한 잔혹한 유기 방식에 더욱이 충격을 주고 있습니다.\"",
            "\"한편 범인은 중년의 뱁새 남성으로, 평소 독수리로 행세했으며 직업은 무직인 것으로 밝혀졌습니다." +
            "육식동물에 대한 자격지심이 범행 동기로 지적됐으며.............\"","\"현장에선...자매 관계인 생존자 2명이 발견됐습니다.....\""
        });
        talkData.Add(50000 + 4, new string[] {
            "갑자기 전등이 꺼졌고, 집주인은 날 강제로 지하실로 데려갔다.",
            "\"여러모로 짜증나게 하네.\"",
            "\"조금만 기다려. 곧 동생 곁으로 보내줄 테니.\"",
            " 점점 시야가 흐려지고,몸이 말을 듣지 않았다. 다행히 경찰이 도착하며 푸른 수염의 저택에서 빠져나올 수 있었다.",
            "\"한 도심 주택에서 세입자 여성을 연속 살해 및 시체를 유기한 사건이 밝혀져 화제입니다.\"",
            " 화학약품과 수도시설을 이용해 시체를 처리한 잔혹한 유기 방식에 더욱이 충격을 주고 있습니다.\"",
            " 한편 범인은 중년의 뱁새 남성으로, 평소 독수리로 행세했으며 직업은 무직인 것으로 밝혀졌습니다.\"","\" 육식동물에 대한 자격지심이 범행 동기로 지적됐으며.............\"",
            "\"현장에선..생존자 1명과 피해자 사체 1구가 발견됐습니다..... \""
        });
        talkData.Add(50000 + 5, new string[] {
            "갑자기 전등이 꺼졌고, 어둠 속의 무언가가 나를 덥쳤다.",
            " 정신을 차리니 곰팡이 냄새와 매캐한 화학물질 냄새가 난다. 지하실인게 분명하다.",
            "\".. 부인이 아까 장난전화를 한 것 같아서요. 확인 차 전화드렸습니다. 별 건 아니고요, 요즘 집사람이 정신이 오락가락해서...\"",
            "\"혹시 부인분 목소리 좀 들을 수 있을까요?\"", 
            "살려달라고 외치고 싶지만 입에 물린 재갈때문에 아무 소리를 낼 수 없다.",
            "\"하하.. 지금 부인이 자리를 비워서요. 지금 날 의심하는 건가요?\"",
            "\"일반적인 절차입니다. 당장 전화 바꿔주세요. 그렇지 않으면 출동하겠습니다.\"",
            "\"야! 너 내가 누군지 알아!\"",
            "삐이이------....",
            "푸른 수염이 씩씩거리는 소리가 들린다.그 순간, 무엇인가에 맞아 정신을 잃었다.",
            "\"정신이 드십니까! 여기 생존자 발견! 생존자 발견!\"",
            "눈치빠른 경찰 덕분에 죽을 위기에서 벗어날 수 있었다.",
            "집주인, 푸른 수염에 대한 보도가 연이어 TV에서 보도되고 있었다.",
            "범행에 대한 조사가 시작될 거라고 한다. 동생은 아직 저택에서 발견되지 않았다."
        });
        talkData.Add(50000 + 6, new string[] {
            "갑자기 전등이 꺼졌고, 어둠 속의 무언가가 나를 덥쳤다.",
            "정신을 차리니 곰팡이 냄새와 매캐한 화학물질 냄새가 났다. 지하실인게 분명하다.",
            "\".. 부인이 아까 장난전화를 한 것 같아서요. 확인 차 전화드렸습니다. 뭐..별 건 아니구요, 빨간 페인트를 보고 착각을 한 모양이에요.\"",
            "\"하하, 요즘 집사람이 정신이 좀 오락가락해서...허허...\"",
            "입의 재갈 때문에 아무 말도 할 수 없었다.",
            "\"서장님은 잘 계시죠? 조만간 찾아 뵙겠다고 말씀 좀 전해 주십쇼..허허.. 그럼 이만 끊겠습니다.\"",
            "\"휴우...너 까짓거 때문에 애먹었잖아. 짜증나게 하네...\"",
            "둔기로 머리를 맞고 바닥으로 곤두박질쳤다. 몸이 말을 듣지 않았다.",
            "마지막 순간 목격한 건 바닥에 떨어진...",
            "핑크색 매니큐어가 칠해진...잘린 손가락이었다."
        });





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

        //오브젝트 조사
        talkData.Add(10000 + 10 + 1, new string[] {"앗! 서랍 안에 벌레가 있잖아. 빨리 닫자."});
        talkData.Add(10000 + 10 + 2, new string[] { "가짜 나무야. 이 집에 진짜 식물은 없는걸까?." });

        //길 막는 특수 오브젝트
        talkData.Add(20000 + 50 + 1, new string[] { "여기서 너무 멀어지는 건 실례일 것 같아." });
        talkData.Add(20000 + 50 + 2, new string[] { "여기는 아닌 거 같아." });
        talkData.Add(20000 + 50 + 3, new string[] { "라코스테 방에는 덩굴들이 많구나." });
        talkData.Add(20000 + 50 + 4, new string[] { "라코스테 방에는 덩굴들이 많구나." });

    }

    void TestData()
    {
        talkData.Add(2000 +10, new string[] { "테스트 시작:10" });
        choiceData.Add(2000 + 10, new Choice("선택 1", new string[] { "A", "B" }));
        talkData.Add(2110, new string[] { "A:10" });
        talkData.Add(2210, new string[] { "B:10" });
        choiceData.Add(2110, new Choice("A", new string[] { "A-1", "A-2" }));
        talkData.Add(2110 + 300 + 100, new string[] { "A-1:10" });
        talkData.Add(2110 + 300 + 200, new string[] { "A-2:10" });
        
    }
    public string GetTalk(int id, int talkIndex)
    {
        //예외처리
        if (!talkData.ContainsKey(id) && theDialogue.npc)
        {
            
            if (!talkData.ContainsKey(id - id % 10))//퀘스트 맨 처음 대사가 없다.
            {
                return GetTalk(id - id % 100, talkIndex);//기본대사 출력
            }
            else
            { //다음 퀘스트 안내 출력해야함.
                return GetTalk(id - id % 10, talkIndex);
            }
        }
        else if (!talkData.ContainsKey(id))
        {
                return GetTalk(id - theQuest.GetQuestTalkIndex(id),talkIndex);//기본대사 출력
        }



        if (talkIndex >= talkData[id].Length)
        {
            return null;
        }
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
