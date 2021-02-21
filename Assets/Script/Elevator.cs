using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Elevator : MonoBehaviour
{
    [SerializeField]

    public Choice floor;
    public Choice basement;
    private ChoiceManager theChoice;
    private OrderManager theOrder;
    private AudioManager theAudio;
    private TransferScene theTransfer;
    private DatabaseManager theDB;
    public string bell;
    public string move;
    public bool flag;
    public bool b1 = false;
    public string f3;
    public string f2;
    public string f1;
    // Start is called before the first frame update
    void Start()
    {
        theChoice = FindObjectOfType<ChoiceManager>();
        theOrder = FindObjectOfType<OrderManager>();
        theAudio = FindObjectOfType<AudioManager>();
        theTransfer = FindObjectOfType<TransferScene>();
        theDB = FindObjectOfType<DatabaseManager>();

      /*  for(int i =0; i < theDB.switch_name.Length; i++)
        {
            if(theDB.switch_name[i] == "basement")
            {
                print("지하실 ㄱㄱ ");
                b1 = theDB.switches[i];
                print(b1);
            }
        }*/
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if(b1)
        {
            flag = true;
            StartCoroutine(B1Coroutine());
            b1 = false;
        } 
        else if(!flag && !b1)
        {
            flag = true;
            StartCoroutine(EventCoroutine());

        }
    }

    IEnumerator EventCoroutine()
    {
        print("코루틴 시작함");
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theChoice.ShowChoice(floor);
        yield return new WaitUntil(() => !theChoice.choicing);
        switch (theChoice.GetResult())
        {
            case 0:
                theTransfer.transferMapName = f3;
                break;
            case 1:
                theTransfer.transferMapName = f2;
                break;
            case 2:
                theTransfer.transferMapName = f1;
                break;

        }
        
        theAudio.Play(move);
        yield return new WaitForSeconds(1f);
        theAudio.Stop(move);
        theAudio.Play(bell);
        theOrder.Move();

    }

    IEnumerator B1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theChoice.ShowChoice(basement);
        yield return new WaitUntil(() => !theChoice.choicing);
        switch (theChoice.GetResult())
        {
            case 0:
                theTransfer.transferMapName = "B1-Corridor";
                theAudio.Play(bell);
                theOrder.Move();
                break;
            case 1:
                StartCoroutine(EventCoroutine());
                break;
        }
    }
}
