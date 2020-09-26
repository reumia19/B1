using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DialogueManager : MonoBehaviour
{
    public static DialogueManager instance;

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

    public Text text;
    public SpriteRenderer rendererSprites;
    public SpriteRenderer rendererDialogueWindows;

    private List<string> listSentences;
    private List<Sprite> listSprites;
    private List<Sprite> listDialogueWindows;

    private int count;

    public Animator animSprite;
    public Animator animDialogueWindow;

    public string typeSound;
    public string enterSound;

    private AudioManager theAudio;

    public bool talking = false;
    private bool keyActivate = false;


    void Start()
    {
        count = 0;
        text.text = "";
        listSentences = new List<string>();
        listSprites = new List<Sprite>();
        listDialogueWindows = new List<Sprite>();
        theAudio = FindObjectOfType<AudioManager>();

    }

    public void ShowDialogue(Dialogue dialogue)
    {
        talking = true;

        for(int i =0; i< dialogue.sentences.Length; i++)
        {
            listSentences.Add(dialogue.sentences[i]);
            listSprites.Add(dialogue.sprites[i]);
            listDialogueWindows.Add(dialogue.dialogueWindows[i]);
        }
        animSprite.SetBool("Appear",true);
        animDialogueWindow.SetBool("Appear", true);
        StartCoroutine(StartDialogueCoroutine());
    }
    public void ExitDialogue()
    {
        
        text.text = "";
        count = 0;
        listSentences.Clear();
        listDialogueWindows.Clear();
        listSprites.Clear();
        animSprite.SetBool("Appear", false);
        animDialogueWindow.SetBool("Appear", false);
        talking = false;
    }
    IEnumerator StartDialogueCoroutine()
    {
        
        if (count > 0)
        {
            if (listDialogueWindows[count] != listDialogueWindows[count-1])//대사바 & 캐릭터 교체
            {
                animDialogueWindow.SetBool("Appear", false);
                animSprite.SetBool("Change", true);
                yield return new WaitForSeconds(0.1f);
                rendererDialogueWindows.GetComponent<SpriteRenderer>().sprite = listDialogueWindows[count];
                rendererSprites.GetComponent<SpriteRenderer>().sprite = listSprites[count];
                animDialogueWindow.SetBool("Appear", true);
                animSprite.SetBool("Change", false);
            }
            else
            {
                 if(listSprites[count] != listSprites[count - 1])//캐릭터만(표정만) 변경
                  {
                     // animSprite.SetBool("Change", true);
                      yield return new WaitForSeconds(0.1f);
                      rendererSprites.GetComponent<SpriteRenderer>().sprite = listSprites[count];
                    //  animSprite.SetBool("Change", false);

                  }
                 else
                {
                    yield return new WaitForSeconds(0.05f);

                }
            }
           
        }
        else//시작부분
        {
            theAudio.Play(typeSound);
            yield return new WaitForSeconds(0.05f);
            rendererDialogueWindows.GetComponent<SpriteRenderer>().sprite = listDialogueWindows[count];
            rendererSprites.GetComponent<SpriteRenderer>().sprite = listSprites[count];
        }
        
        for (int i = 0; i < listSentences[count].Length; i++)// 실제 텍스트 출력부
        {
            text.text += listSentences[count][i];
            yield return new WaitForSeconds(0.01f);
        }
        keyActivate = true;
    }
    // Update is called once per frame
    void Update()
    {
        if (talking && keyActivate)
        {
            if (Input.GetKeyDown(KeyCode.Z))
            {
                theAudio.Play(enterSound);
                keyActivate = false;
                count++;
                text.text = "";
                if (count == listSentences.Count)
                {
                    StopAllCoroutines();
                    ExitDialogue();

                }
                else
                {
                    StopAllCoroutines();
                    StartCoroutine(StartDialogueCoroutine());

                   
                }
            }

        }

       
    }
}
