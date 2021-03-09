using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follow : MonoBehaviour
{
    // Start is called before the first frame update
    private OrderManager theOrder;
    private PlayerManager thePlayer;
    public string name;
    public bool flag;
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theOrder.PreloadCharacter();
    }


    private void Update()
    {
        if (this.transform.position == thePlayer.transform.position) flag = true;
        if(!flag)
        theOrder.MoveTo(name);
    }


    /*
    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (!flag)
        {
            flag = true;
            theOrder.PreloadCharacter();
            theOrder.MoveTo(name);
        }
    }*/
}
 
