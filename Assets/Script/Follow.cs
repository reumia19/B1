using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Follow : MonoBehaviour
{
    // Start is called before the first frame update
    private OrderManager theOrder;

    public bool flag;
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
    }


    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (!flag)
        {
            flag = true;
            theOrder.PreloadCharacter();
            theOrder.MoveTo("Doa");
        }
    }
}
 
