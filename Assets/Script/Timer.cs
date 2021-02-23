using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{
    // Start is called before the first frame update

    public bool startState;
    public float loadingTime;
    public string toggleSeneName;

    private float startTime;
    private bool run;
    QuestManager theQuest;
    
    void Start()
    {
        theQuest = FindObjectOfType<QuestManager>();
        startTime = 0;
    }

    // Update is called once per frame
    void Update()
    {
        Debug.Log(Time.deltaTime);
        if (run)
        {
            if (toggleSeneName == theQuest.CheckQuest())  //시작 조건이 만족하면
            {
                if(startTime == 0)  // 
                    startTime = Time.deltaTime;
                else if(startTime +loadingTime < Time.deltaTime)
                {
                    run = false;
                    this.gameObject.SetActive(!startState);
                }

            }
            
        }
        
        
    }
}
