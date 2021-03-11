using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DatabaseManager : MonoBehaviour
{
    static public DatabaseManager instance;
    QuestManager theQuest;
    public string[] var_name;
    public float[] var;

    public string[] switch_name;
    public bool[] switches;
    private bool isNight = false;
    public bool state;
    private void Awake()
    {
        if (instance != null)
        {
            Destroy(this.gameObject);
        }
        else
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
        }
        theQuest = FindObjectOfType<QuestManager>();
    }
    private void Update()
    {
        CheckPink();
        CheckEnding();
    }
    public bool Find(string _name)
    {
        state = false;

        for (int i = 0; i < this.switch_name.Length; i++)
        {
            if (this.switch_name[i] == _name)
            {
                state = switches[i];
                //print(_name + " : " + state);
            }
        }
        return state;
        // Update is called once per frame
    }

    public void Change(string _name)
    {
        for (int i = 0; i < this.switch_name.Length; i++)
        {
            if (this.switch_name[i] == _name)
            {
                switches[i] = true;
                print(_name + " = " + state +"changed");
            }
        }
    }

    public void CheckPink()
    {
        
        if (theQuest.CheckQuest() != "시나리오_5" || isNight)
            return;

        int countPinkQuest = 0;

        for (int i = 0; i < this.switches.Length; i++)
            if (this.switches[i])
                countPinkQuest++;
        Debug.Log(countPinkQuest);
        if (countPinkQuest >= 6)
        {
            theQuest.CheckQuest(0);
            isNight = true;
            Debug.Log("핑크색 퀘스트 완료");
        }
    }

    public void CheckEnding()
    {
        if (theQuest.CheckQuest() != "시나리오_8")
            return;

        int countEnding = 0;

        for (int i = 0; i < this.switches.Length; i++)
            if (this.switches[i])
                countEnding++;

        if (countEnding>= 12)
        {
            theQuest.CheckQuest(0);
            Debug.Log("지하실 조사 완료");
        }
    }

    public void Reset()
    {
        for (int i = 0; i < this.switch_name.Length; i++)
        {
            switches[i] = false;
        }
    }
}
