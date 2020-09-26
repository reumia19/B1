using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class Restart : MonoBehaviour
{
    [SerializeField]

    public Dialogue dialogue1;
    public Choice choice1;


    static public Restart instance;
    private Ending theEnding;
    private OrderManager theOrder;
    private DialogueManager theDM;
    private BGMManager theBGM;
    private PlayerManager thePlayer;
    private DatabaseManager theDB;
    private ChoiceManager theChoice;
    private bool flag;

    private void Awake()
    {
        if (instance != null)
        {
            Destroy(this.gameObject);
        }
        else
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        theEnding = FindObjectOfType<Ending>();
        theOrder = FindObjectOfType<OrderManager>();
        theDM = FindObjectOfType<DialogueManager>();
        theBGM = FindObjectOfType<BGMManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theDB = FindObjectOfType<DatabaseManager>();
        theChoice = FindObjectOfType<ChoiceManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!flag && Input.GetKey(KeyCode.Q))
        {
            flag = true;
            StartCoroutine(Event1Coroutine());
        }
    }

    IEnumerator Event1Coroutine()
    {
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theChoice.ShowChoice(choice1);
        yield return new WaitUntil(() => !theChoice.choicing);
        if (theChoice.GetResult() == 0)
        {
            for (int i = 0; i < theDB.switch_name.Length; i++)
            {

                theDB.switches[i] = false;
               
            }
            theEnding.SetNotActive();
            thePlayer.beforeMapName = "start";
            SceneManager.LoadScene("1-Tutorial");
           
        }
        theOrder.Move();
            flag = false;
    }
}
