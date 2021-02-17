using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class NTalkManager : MonoBehaviour
{
    Dictionary<int, string[]> talkData;//실질적인 데이ㅣ터베이스..?
    Dictionary<int, string> nameData;
    Dictionary<int, Sprite> portraitData;
    Choice newChoice;
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
        
        GenerateData();
        //StartCoroutine(loadData());
    }


    IEnumerator loadData()//스프레드시트의 데이터 로드 테스트 
    {
        UnityWebRequest www = UnityWebRequest.Get(URL);
        yield return www.SendWebRequest();
    
        string data = www.downloadHandler.text;
       // Debug.Log(data);
        string[] line = data.Split('\n');// line에는 한 줄의 데이터가 들어있다. 
        lineSize = line.Length; 
        rowSize = line[0].Split('\t').Length;
        sentence = new string[lineSize, rowSize];

        for (int i = 0; i < lineSize; i++)
        {
            string[] row = line[i].Split('\t');
            for (int j = 1; j < rowSize; j++)
            {
                int id = int.Parse(row[0]);

                sentence[i, j] = row[j];
                //talkData.Add(id, row);
              //  Debug.Log(talkData[id]);
            }
        }
   
          
        /*for(int i = 0; i )
        {

        }*/
    }

    void GenerateData()
    {
        
        //일반대사
        talkData.Add(2000, new string[] { "안녕:0", "디버깅이 끝나면 나는 사라지겠지:1","한 번 쓰고 버려지는 게 내 운명인걸:2" });
        talkData.Add(1000,new string[] { "안녕 나는 쓰레기야:0", "디버깅을 위해 만들어졌지:1","이제 꺼져:2" });
        talkData.Add(3000, new string[] { "안녕 나는 쓰레기야:0", "디버깅을 위해 만들어졌지:1", "이제 꺼져:2" });
        talkData.Add(4000, new string[] { "안녕 나는 쓰레기야:0", "디버깅을 위해 만들어졌지:1", "이제 꺼져:2" });
        talkData.Add(5000, new string[] { "안녕 나는 쓰레기야:0", "디버깅을 위해 만들어졌지:1", "이제 꺼져:2" });
        talkData.Add(8000, new string[] { "오 캡틴 마이 캡틴?" });

        //QuestTalk (퀘스트 번호, 대사묶음)
        // 시나리오 1
        talkData.Add(10 + 1000, new string[] { "어서와:0", "이런 집은.. 처음이지?:0" });
        talkData.Add(11 + 2000, new string[] { "여기에 오면 어떡해:0", "도망쳐..:0" });
        //시나리오 2
        talkData.Add(20 + 1000, new string[] { "이걸로 경고는 두 번째야:0","좋은 말로 할 때 돌아가:2" });
        talkData.Add(20 + 5000, new string[] {"지하1층 버튼이다"});
        talkData.Add(21 + 2000, new string[] { "가라구:0", "가..:1" });
        //시나리오 끗

        //초상화 이미지
        portraitData.Add(1000 + 0,portaritArr[0]);
        portraitData.Add(1000 + 1, portaritArr[1]);
        portraitData.Add(1000 + 2, portaritArr[2]);
        portraitData.Add(2000 + 0, portaritArr[3]);
        portraitData.Add(2000 + 1, portaritArr[4]);
        portraitData.Add(2000 + 2, portaritArr[5]);
        portraitData.Add(2000 + 3, portaritArr[5]);

        nameData.Add(1000, "한도아");
        nameData.Add(2000, "한량");
        nameData.Add(3000, "라코스테");
        nameData.Add(4000, "푸른수염");
        nameData.Add(5000, "어쩌구");
    }

     public string GetTalk(int id, int talkIndex)
    {
        //예외처리
        if (!talkData.ContainsKey(id))
        {
            if(!talkData.ContainsKey(id - id % 10))
            {//퀘스트 맨 처음 대사마저 없으면 기본대사.
                return GetTalk(id - id % 100, talkIndex);
            }
            else
            { //쿼스트 맨 처음 대사가 있긴 있다. 
                return GetTalk(id - id % 10, talkIndex);
            }
        }

        if (talkIndex == talkData[id].Length)
            return null;
        else
            return talkData[id][talkIndex];
    }

    public Sprite GetPortrait(int id, int portraitIndex)
    {
        return portraitData[id + portraitIndex];
    }
    
    public string GetName(int id)
    {
        return nameData[id];
    }
}
