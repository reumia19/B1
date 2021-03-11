﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TransferScene : MonoBehaviour
{
	public string transferMapName; //이동할 맵의 이름
    public string thisMapName;
    public string doorSound;

    protected PlayerManager thePlayer;
    private AudioManager theAudio;
    private BGMManager theBGM;
    private FadeManager theFade;
    private OrderManager theOrder;

    bool flag;

    // Start is called before the first frame update
    protected void Start()
    {
	   thePlayer = FindObjectOfType<PlayerManager>();
        theAudio = FindObjectOfType<AudioManager>();
        theFade = FindObjectOfType<FadeManager>();
        theOrder = FindObjectOfType<OrderManager>();
        theBGM = FindObjectOfType<BGMManager>();
    }


    private void OnTriggerStay2D(Collider2D collision)
    {
        
        Debug.Log(collision.gameObject.name);

        if (!flag &&collision.gameObject.name == "Player")
        {
            flag = true;
            Debug.Log("플레이어 마즘");
            StartCoroutine(TransferCoroutine());
        }
        
    }

    
    protected IEnumerator TransferCoroutine()
    {
        thePlayer.notMove = true;
        theAudio.Play(doorSound);
        theBGM.FadeOutMusic();
        theFade.FadeOut();
        yield return new WaitForSeconds(0.6f);
        theBGM.Stop();
        thePlayer.beforeMapName = thisMapName;
        thePlayer.currentMapName = transferMapName;
        SceneManager.LoadScene(transferMapName);
        theFade.FadeIn();
        thePlayer.notMove = false;
        flag = false;
    }
}
