using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;


public class Warning : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public string sound;

    private bool dial;
    public Transform target;
    public Light2D light2D;
    private PlayerManager thePlayer;
    private DialogueManager theDM;
    private AudioManager theAudio;
    private OrderManager theOrder;
    public float seconds;
    private bool flag;
    private WaitForSeconds waitTime;
    


    void Start()
    {
        seconds = Random.Range(1f, 3);
        waitTime = new WaitForSeconds(seconds);
        thePlayer = FindObjectOfType<PlayerManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theAudio = FindObjectOfType<AudioManager>();
        theOrder = FindObjectOfType<OrderManager>();

    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if (light2D.gameObject.activeSelf&& !dial)
        {
            dial = true;
            StartCoroutine(Transfer());
        }
    }


    void Update()
    {
        if(!flag&& !light2D.gameObject.activeSelf)
        {
            flag = true;
            StartCoroutine(LightOn());
        }
    }

    
    IEnumerator LightOn()
    {

        light2D.gameObject.SetActive(true);
        yield return waitTime;
        StartCoroutine(LightOff());
    }
    IEnumerator LightOff()
    {
        light2D.gameObject.SetActive(false);
        yield return waitTime;
        flag = false;
    }

    IEnumerator Transfer()
    {   
        //theCamera.transform.position = new Vector3(target.transform.position.x, target.transform.position.y, theCamera.transform.position.z);
        theAudio.Play(sound);
        theOrder.NotMove();
        thePlayer.transform.position = new Vector3(target.transform.position.x, target.transform.position.y, thePlayer.transform.position.z);
        theDM.ShowDialogue(dialogue1); ///대화
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        dial = false;
    }
}
