using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.Rendering.Universal;

public class MovingTorch : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public Dialogue dialogue2;

    // Start is called before the first frame update
    private OrderManager theOrder;
    private DialogueManager theDM;
    private DatabaseManager theDB;
    private PlayerManager thePlayer;
    public Light2D torch;
	public float moveSpeed;
	private Vector3 targetPosition; // 대상의 현재 위치값

    public static MovingTorch instance;
    
    public static int count;
    public bool cor;
    private bool flag1;
    private bool flag2;

    #region Singleton

    private void Awake()
    {
        if (instance == null)
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
    #endregion Singleton

    private void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();

    }
    // Update is called once per frame
    void Update()
    {
        	targetPosition.Set(thePlayer.transform.position.x, thePlayer.transform.position.y+1, this.transform.position.z);
        	this.transform.position = Vector3.Lerp(this.transform.position, targetPosition, moveSpeed * Time.deltaTime); // 1초에 moveSpeed만큼 이동

        if (theDB.Find("10106"))
        {
            torch.gameObject.SetActive(true);
        }
        /*if (!theDB.Find("Light"))
        {
            if (!cor && count < 101 && torch.gameObject.activeSelf)
            {
                cor = true;
                StartCoroutine(Countdown());
            }
            else if (theDB.Find("M10") && count == 0)
            {
                torch.gameObject.SetActive(true);
           
                StartCoroutine(Countdown());
            }
        }*/

    }
    IEnumerator Countdown()
    {
        count++;
        Debug.Log("count = " + count);
        yield return new WaitForSeconds(1f);

        if (count > 180 && !flag2)
        {
            torch.gameObject.SetActive(false);
            StartCoroutine(Event2Coroutine());

        }
        else if(count > 80 &&!flag1)
        {
            StartCoroutine(Event1Coroutine());
        }

        cor = false;
    }

    IEnumerator Event1Coroutine()
    {
        flag1 = true;
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue1);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
    }

    IEnumerator Event2Coroutine()
    {
        flag2 = true;
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theDM.ShowDialogue(dialogue2);
        yield return new WaitUntil(() => !theDM.talking);
        theDM.ExitDialogue();
        theOrder.Move();
        theDB.Change("End");
    }

}
