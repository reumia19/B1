using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class B1Fade : MonoBehaviour
{
    public bool flag;

    private OrderManager theOrder;
    private DialogueManager theDM;
    private ChoiceManager theChoice;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;
    private FadeManager theFade;
    private BGMManager theBGM;
    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theChoice = FindObjectOfType<ChoiceManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        theFade = FindObjectOfType<FadeManager>();
        theBGM = FindObjectOfType<BGMManager>();
    }

    // Update is called once per frame
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (!flag)
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
        }
    }

    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        yield return new WaitForSeconds(1f);
        theDB.Change("End");
       


    }

}