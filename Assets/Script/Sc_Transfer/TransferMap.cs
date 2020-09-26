using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class TransferMap : MonoBehaviour
{
    public Transform target;
    public BoxCollider2D targetBound;

    private PlayerManager thePlayer;
    private CameraManager theCamera;
    // Start is called before the first frame update
    void Start()
    {
        thePlayer = FindObjectOfType<PlayerManager>();
        theCamera = FindObjectOfType<CameraManager>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter2D(Collider2D collision)
    {
    	if(collision.gameObject.name == "Player")
    	{
        theCamera.SetBound(targetBound);
        theCamera.transform.position = new Vector3(target.transform.position.x, target.transform.position.y, theCamera.transform.position.z);
        thePlayer.transform.position = target.transform.position;
    	}
    }
}
