using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Event1 : MonoBehaviour
{
    [SerializeField]
    public Dialogue dialogue1;

    public string animDir;
    public float dir;
    private DialogueManager theDM;
    private OrderManager theOrder;
    private PlayerManager thePlayer;
    private AudioManager theAudio;

    public string footStep_0;
    private bool flag;

    void Start()
    {
        theDM = FindObjectOfType<DialogueManager>();
        theOrder = FindObjectOfType<OrderManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theAudio = FindObjectOfType<AudioManager>();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if( !flag &&Input.GetKey(KeyCode.Z) && thePlayer.animator.GetFloat("DirX") == -1)
        {
            flag = true;
            StartCoroutine(EventCoroutine());
            
        }
    }

    IEnumerator EventCoroutine()
    {
       
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theAudio.Play(footStep_0);
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(()=> !theDM.talking);
        theOrder.Move();

    }
}
