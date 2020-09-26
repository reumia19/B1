using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BGM : MonoBehaviour
{
    public int BGM_Num;
    private BGMManager theBGM;
    // Start is called before the first frame update
    void Start()
    {
        theBGM = FindObjectOfType<BGMManager>();
        theBGM.Play(BGM_Num);
        theBGM.FadeInMusic();
        
    }
}
