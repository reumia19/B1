using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{
    // Start is called before the first frame update

    public bool startState;
    public float loadingTime;
    public string toggleSeneName;
    public GameObject theGameObject;

    private bool run = true;
    QuestManager theQuest;
    
    void Start()
    {
        theQuest = FindObjectOfType<QuestManager>();
        theGameObject.SetActive(startState);
    }

    // Update is called once per frame
    void Update()
    {

        if (run)
        {
            if (toggleSeneName == theQuest.CheckQuest())  //시작 조건이 만족하면
            {
                Debug.Log("카운트다운" + loadingTime);
                if (loadingTime > 0)  // 
                    loadingTime -= Time.deltaTime;

                else
                {
                    run = false;
                    theGameObject.SetActive(!startState);
                }

            }
            
        }
        
        
    }
}
