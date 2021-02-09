using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NDialogueManager : MonoBehaviour
{
    public Text TalkText;
    public Text NameSpace;
    public GameObject talkPanel;
    public GameObject scanObject;
    public NTalkManager talkManager;
    public Image portraitImage;


    public bool isAction;
    public int talkIndex;

    public void Action(GameObject scanObj)
    {
        scanObject = scanObj;
        NDataBase database = scanObject.GetComponent<NDataBase>();
        Image portraidImage = portraitImage.GetComponent<Image>();
        Talk(database.id, database.isNpc);
        talkPanel.SetActive(isAction);
    }

    void Talk(int id, bool isNpc)
    {
        string talkData = talkManager.GetTalk(id, talkIndex);

        if (talkData == null)
        {
            talkIndex = 0;
            isAction = false;
            return;
        }

        if (isNpc)
        {
            TalkText.text = talkData.Split(':')[0];
            portraitImage.sprite = talkManager.GetPortrait(id, int.Parse(talkData.Split(':')[1]));
            portraitImage.color = new Color(1, 1, 1, 1);
            NameSpace.text = talkManager.GetName(id);

        }
        else
        {
            NameSpace.text = "";
            TalkText.text = talkData;
            portraitImage.color = new Color(1, 1, 1, 0);
        }

        isAction = true;
        talkIndex ++;
    }
}
