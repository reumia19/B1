using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Main_3 : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;

    public bool flag;
    public int musicNum;
    public string animDir;
    public float dir;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private BGMManager theBGM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;

    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theBGM = FindObjectOfType<BGMManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
    }

    // Update is called once per frame
    private void OnTriggerStay2D(Collider2D collision)
    {
        if (!flag && Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat(animDir) == dir&& theDB.Find("M2"))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
            theDB.Change("M3");
        }
    }
    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theBGM.Play(musicNum);
        theBGM.FadeInMusic();
        yield return new WaitForSeconds(1f);
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        this.gameObject.SetActive(false);

    }

}
