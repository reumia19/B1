using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Title : MonoBehaviour
{
    public GameObject GO;
    private PlayerManager thePlayer;

    private bool flag = false;
    // Start is called before the first frame update
    void Start()
    {
        thePlayer = FindObjectOfType<PlayerManager>();
        thePlayer.notMove = true;
    }

    // Update is called once per frame
     void Update()
    {
        //플래그가 false인 상태에서, Z키나 방향키가 눌리면 
        if (!flag && Input.GetKey(KeyCode.Z)|| Input.GetKey(KeyCode.DownArrow) ||
            Input.GetKey(KeyCode.LeftArrow)|| Input.GetKey(KeyCode.RightArrow) ||
            Input.GetKey(KeyCode.UpArrow) )
        {
            flag = !flag;
            thePlayer.notMove = false;
            GO.SetActive(true);
        }
    }
}
