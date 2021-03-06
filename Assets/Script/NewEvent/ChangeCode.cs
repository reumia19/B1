using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeCode : MonoBehaviour
{
    NDataBase nDB;
    DatabaseManager databaseManager;
    NDialogueManager dialogueManager;
    public string[] checkBox;
    public bool check;
    public int changeCode;
    void Start()
    {
        nDB = this.gameObject.GetComponent<NDataBase>();
        databaseManager = FindObjectOfType<DatabaseManager>();
        dialogueManager = FindObjectOfType<NDialogueManager>();
       for(int i =0; i <checkBox.Length; i++)
        {
              check = databaseManager.Find(checkBox[i]);
             if (check)
                {
                nDB.id = changeCode;
                    break;
                }
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (!check)
        {
            for (int i = 0; i < checkBox.Length; i++)
            {
                check = databaseManager.Find(checkBox[i]);
                if (check)
                {
                    nDB.id = changeCode;
                    break;
                }
            }
        }
    }
}
