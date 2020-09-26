using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hide : MonoBehaviour
{
    public SpriteRenderer playerSprite;
    private Color color;

    private PlayerManager thePlayer;
    private OrderManager theOrder;

    private WaitForSeconds waitTime = new WaitForSeconds(1f);

    private bool isIn = false;
    private bool isOut = false;
    private bool flag = false;
    private void Start()
    {
        thePlayer = FindObjectOfType<PlayerManager>();
        theOrder = FindObjectOfType<OrderManager>();
    }

    private void OnTriggerStay2D(Collider2D collision)
    {
        if(thePlayer.animator.GetFloat("DirY")== 1 && Input.GetKey(KeyCode.Z) && !isIn &&!flag)
        {
            flag = true;
            StartCoroutine(GetIn());

        }else if(isIn && Input.GetKey(KeyCode.Z) && !isOut)
        {
            isOut = true;
            StartCoroutine(GetOut());
        }
    }

    IEnumerator GetIn()
    {
        print("들어감");
        theOrder.NotMove();
        color = playerSprite.color;
        color.a = 0;
        playerSprite.color = color;
        yield return waitTime;
        isIn = true;
    }

    IEnumerator GetOut()
    {
        print("나옴");
        color.a = 1;
        playerSprite.color = color;
        theOrder.Move();
        yield return new WaitForSeconds(1f);

    }


}
