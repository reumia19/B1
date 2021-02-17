using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartPoint : MonoBehaviour
{
	public string beforeMap; // 맵이 이동되면 플레이어가 시작할 위치
    public string doorSound;
	private PlayerManager thePlayer;
    private CameraManager theCamera;

    private AudioManager theAudio;
    // Start is called before the first frame update
    void Start()
    {
        theCamera = FindObjectOfType<CameraManager>();
    	thePlayer = FindObjectOfType<PlayerManager>();
        theAudio = FindObjectOfType<AudioManager>();

    	if(beforeMap ==thePlayer.beforeMapName){
    		thePlayer.transform.position = new Vector3(this.transform.position.x, this.transform.position.y, thePlayer.transform.position.z);
            theCamera.transform.position = new Vector3(this.transform.position.x,this.transform.position.y,theCamera.transform.position.z);
            theAudio.Play(doorSound);
        }
        else if(beforeMap =="")
        {
            thePlayer.transform.position = new Vector3(0,0,0);
            theCamera.transform.position = new Vector3(0,0,0);
            theAudio.Play(doorSound);
        }


    }
}
