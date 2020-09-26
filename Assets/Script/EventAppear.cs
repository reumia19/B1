using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventAppear : MonoBehaviour
{
    public GameObject Event;
    public GameObject RandomDialogue;
    public string thisStage;
    private DatabaseManager theDB;


    // Start is called before the first frame update
    void Start()
    {
        theDB = FindObjectOfType<DatabaseManager>();

        if (theDB.Find(thisStage))
        {
            Event.SetActive(false);
            RandomDialogue.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
