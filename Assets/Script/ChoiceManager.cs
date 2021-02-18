using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ChoiceManager : MonoBehaviour
{
    public static ChoiceManager instance;
    // Start is called before the first frame update
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

    private string question;
    private List<string> answerList;

    public AudioManager theAudio;

    public GameObject go; //평소에 초이스매니저를 비활성화시킬 목적으로 사용
    public PlayerManager thePlayer;

    public Text question_Text;
    public Text[] answer_Text;
    public GameObject[] answer_Panel;

    public Animator anim;

    public string keySound;
    public string enterSound;

    public bool choicing;//대기 ()=> !choicing
    private bool keyInput; //키처리 활성화, 비활성화(선택시 소리 나게 하는 것을 제어하기 위해)

    private int count;
    private int result;

    private WaitForSeconds waitTime = new WaitForSeconds(0.01f);

    void Start()
    {
        thePlayer = FindObjectOfType<PlayerManager>();
        theAudio = FindObjectOfType<AudioManager>();
        answerList = new List<string>();
        for (int i =0; i<=2; i++)
        {
            answer_Text[i].text = "";
            answer_Panel[i].SetActive(false);
        }
        question_Text.text = "";
    }

    public void ShowChoice(Choice _choice)
    {
        thePlayer.notMove = true;
        choicing = true;
        go.SetActive(true);
        result = 0;
        question = _choice.question;
        for (int i = 0; i<_choice.answers.Length; i++)
        {
            answerList.Add(_choice.answers[i]);
            answer_Panel[i].SetActive(true);
            count = i;// 끝나면 3이 될 거고, 앞으로 많이 사용하게 될 거임
        }

        anim.SetBool("Appear",true);
        Selection();
        StartCoroutine(ChoiceCoroutine());
    }

    public int GetResult()
    {
        return result;
    }

    public void ExitChoice()
    {
        question_Text.text = "";
        for(int i =0; i <= count; i++)
        {
            answer_Text[i].text = "";
            answer_Panel[i].SetActive(false);
        }
        answerList.Clear();
        anim.SetBool("Appear",false);
        choicing = false;
        go.SetActive(false);
        thePlayer.notMove = false;
        Debug.Log("선택 끝");
    }
    IEnumerator ChoiceCoroutine()
    {
        yield return new WaitForSeconds(0.2f);
        StartCoroutine(TypingQuestion());
        StartCoroutine(TypingAnswer_0());
        if (count>=1)
        {
            StartCoroutine(TypingAnswer_1());
        }
        if (count >= 2)
        {
            StartCoroutine(TypingAnswer_2());
        }
        yield return new WaitForSeconds(0.5f);

        keyInput = true;

    }

    IEnumerator TypingQuestion()
    {
        for (int i = 0; i<question.Length;i++)
        {
            question_Text.text += question[i];
            yield return waitTime;
        }
    }

    IEnumerator TypingAnswer_0()
    {
        yield return new WaitForSeconds(0.4f);
        for (int i = 0; i < answerList[0].Length; i++)
        {
            answer_Text[0].text += answerList[0][i];
            yield return waitTime;
        }
    }
    IEnumerator TypingAnswer_1()
    {
        yield return new WaitForSeconds(0.5f);
        for (int i = 0; i < answerList[1].Length; i++)
        {
            answer_Text[1].text += answerList[1][i];
            yield return waitTime;
        }
    }

    IEnumerator TypingAnswer_2()
    {
        yield return new WaitForSeconds(0.6f);
        for (int i = 0; i < answerList[2].Length; i++)
        {
            answer_Text[2].text += answerList[2][i];
            yield return waitTime;
        }
    }


    // Update is called once per frame
    void Update()
    {
        if (keyInput)
        {
            if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                theAudio.Play(keySound);
                if (result > 0)
                {
                    result--;
                }
                else
                {
                    result = count;
                }
                Selection();
            }
            else if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                theAudio.Play(keySound);
                if (result < count)
                {
                    result++;
                }
                else
                {
                    result = 0;
                }
                Selection();
            }
            else if(Input.GetKeyDown(KeyCode.Z))
            {
                theAudio.Play(enterSound);
                keyInput = false;
                ExitChoice();
                
            }

        }
    }

    public void Selection()
    {
        Color color = answer_Panel[0].GetComponent<Image>().color;
        color.a = 0f;
        for (int i = 0; i <= count; i++)
        {
            answer_Panel[i].GetComponent<Image>().color = color;
        }
        color.a = 1f;
        answer_Panel[result].GetComponent<Image>().color = color;
    }


}
