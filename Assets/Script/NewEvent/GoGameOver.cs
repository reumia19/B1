using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GoGameOver : TransferScene
{
    protected DatabaseManager theDB;
    public string overName;
    


    // Start is called before the first frame update
    void Start()
    {
        base.Start();
        theDB = FindObjectOfType<DatabaseManager>();
        transferMapName = "Ending";

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
        theDB.Change(overName);
        StartCoroutine(TransferCoroutine());
    }

}
