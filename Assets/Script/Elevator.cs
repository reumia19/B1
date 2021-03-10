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
    public TransferScene theTransfer;
    private DatabaseManager theDB;
    public string bell;
    public string move;
    public bool flag;
    public bool b1 = false;
    public string f3;
    public string f2;
    public string f1;
    public string b;

    // Start is called before the first frame update
    void Start()
    {
        theChoice = FindObjectOfType<ChoiceManager>();
        theOrder = FindObjectOfType<OrderManager>();
        theAudio = FindObjectOfType<AudioManager>();
        //theTransfer = FindObjectOfType<TransferScene>();
        theDB = FindObjectOfType<DatabaseManager>();

    }

    private void OnTriggerStay2D(Collider2D collision)
    {

         if(!flag)
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
                Debug.Log(f3);
                break;
            case 1:
                theTransfer.transferMapName = f2;
                Debug.Log(f2);
                break;
            case 2:
                theTransfer.transferMapName = f1;
                Debug.Log(f1);
                break;
            case 3:
                theTransfer.transferMapName = b;
                Debug.Log(b);
                break;
        }
        
        theAudio.Play(move);
        yield return new WaitForSeconds(1f);
        theAudio.Stop(move);
        theAudio.Play(bell);
        theOrder.Move();

    }

    
}
