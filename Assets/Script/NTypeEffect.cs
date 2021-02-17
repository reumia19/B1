using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NTypeEffect : MonoBehaviour
{
    
    public int CharPerSeconds;
    public GameObject EndCursor;
    public AudioSource audioSource;

    string targetMsg;
    Text msgText;
    int index;
    float interval;
    public bool isAnim;

    private void Awake()
    {
        msgText = GetComponent<Text>();
        audioSource = GetComponent<AudioSource>(); 
    }
    public void setMSG(string msg)
    {
        if (isAnim)
        {
            msgText.text = targetMsg;
            CancelInvoke();
            EffectEnd();
        }
        else
        {
            targetMsg = msg;
            EffectStart();
        }
        
    }

    void EffectStart()
    {
        EndCursor.SetActive(false);
        msgText.text = "";
        index = 0;

        interval = 1.0f / CharPerSeconds;

        isAnim = true;
        Invoke("Effecting",interval);
    }
    void Effecting()
    {
        if(msgText.text == targetMsg)
        {
            EffectEnd();
            return;
        }
        msgText.text += targetMsg[index];
        if (targetMsg[index] !=' ' || targetMsg[index] != '.')
        {
            audioSource.Play();
        }
        
        index++;
        
        Invoke("Effecting", interval);
    }

    void EffectEnd()
    {
        isAnim = false;
        EndCursor.SetActive(true);
    }
}
