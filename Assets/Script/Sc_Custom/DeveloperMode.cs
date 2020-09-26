using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class DeveloperMode : MonoBehaviour
{
    public string[] transferMapName;
    public string[] thisMapName;
    public int ThisMapNum;
    public bool thisMode = false;

    private BGMManager theBGM;
	private PlayerManager thePlayer;
    // Start is called before the first frame update
    void Start()
    {
   		thePlayer = FindObjectOfType<PlayerManager>();
        theBGM = FindObjectOfType<BGMManager>();
    }

    // Update is called once per frame
    void Update()
    {

        if(thisMode){
            TransferScene();
        }

        if(Input.GetKeyDown(KeyCode.Alpha0)){
            if(thisMode){
                thisMode =false;
                Debug.Log("DeveloperMode Off");
            }else{
                thisMode = true;
                 Debug.Log("DeveloperMode On");
            }
        }

    }

    void TransferScene()
    {
        theBGM.Stop();
        thePlayer.beforeMapName = thisMapName[ThisMapNum];

        if (Input.GetKeyDown(KeyCode.Alpha1))
        {
            thePlayer.currentMapName = transferMapName[1];
            SceneManager.LoadScene(transferMapName[1]);

        }
        if (Input.GetKeyDown(KeyCode.Alpha2))
        {
            thePlayer.currentMapName = transferMapName[2];
            SceneManager.LoadScene(transferMapName[2]);

        }
        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            thePlayer.currentMapName = transferMapName[3];
            SceneManager.LoadScene(transferMapName[3]);

        }
        if (Input.GetKeyDown(KeyCode.Alpha4))
        {
            thePlayer.currentMapName = transferMapName[4];
            SceneManager.LoadScene(transferMapName[4]);

        }
        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            thePlayer.currentMapName = transferMapName[5];
            SceneManager.LoadScene(transferMapName[5]);

        }
        if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            thePlayer.currentMapName = transferMapName[6];
            SceneManager.LoadScene(transferMapName[6]);

        }
        

    }

}

