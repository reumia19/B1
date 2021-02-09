using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NTalkManager : MonoBehaviour
{
    Dictionary<int, string[]> talkData;//실질적인 데이ㅣ터베이스..?
    Dictionary<int, string> nameData;
    Dictionary<int, Sprite> portraitData;

    public Sprite[] portaritArr;

    private void Awake()
    {
        talkData = new Dictionary<int, string[]>();
        nameData = new Dictionary<int, string>();
        portraitData = new Dictionary<int, Sprite>();
        GenerateData();
    }

    void GenerateData()
    {
        talkData.Add(2000, new string[] { "안녕:0", "디버깅이 끝나면 나는 사라지겠지:1","한 번 쓰고 버려지는 게 내 운명인걸:2" });
        talkData.Add(1000,new string[] { "안녕 나는 쓰레기야:0", "디버깅을 위해 만들어졌지:1","이제 꺼져:2" });
        talkData.Add(100, new string[] { "오 캡틴 마이 캡틴?" });

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
    }

     public string GetTalk(int id, int talkIndex)
    {
        if (talkIndex == talkData[id].Length)
        { 
            return null;
        }
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
