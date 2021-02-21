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
        talkData.Add(1000, new string[] { "안녕 나는 쓰레기야:11", "디버깅을 위해 만들어졌지:11", "이제 꺼져:12" });
        talkData.Add(100, new string[] { "오 캡틴 마이 캡틴?" });

        //QuestTalk (퀘스트 번호, 오브젝트 번호)
       // 인트로
        talkData.Add(1000 + 10, new string[] { 
            "동생과 연락이 끊긴 지 벌써 1년이 지났다.:10",
            "수소문해서 알게 된 이 저택. 부디 이곳에서는 동생을 찾을 수 있기를.....:11",
            "들어오시죠. 2층으로 안내하겠습니다.:20",
            "(내가 누군지 말하지도 않았는데...? 모든 일이 익숙한 듯 보인다.):11" 
        });


        // 인트로
        talkData.Add(1000 + 20, new string[] { "동생과 연락이 끊긴 지 벌써 1년이 지났다.:1", "수소문해서 알게 된 이 저택. 부디 이곳에서는 동생을 찾을 수 있기를.....:0" });

        //시나리오 1 질문
        choiceData.Add(20 + 1000, new Choice("이런 집은 처음이지?", new string[] { "응", "아니", "어쩌라고" }));
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
