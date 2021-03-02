using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NpcMoveOrder : MonoBehaviour
{
    OrderManager theOrder;
    NPCManager theNPC;

    public string[] direction;
    // Start is called before the first frame update
    void Start()
    {
        theOrder = FindObjectOfType<OrderManager>();
        theNPC = GetComponent<NPCManager>();
        theOrder.PreloadCharacter();
        theOrder.NotMove();
        theOrder.Move(theNPC.characterName, "UP");
        
        
        /*
        theNPC.npc.NpcMove = false;
        for (int i = 0; i < direction.Length; i++)
        {

            Debug.Log("dfdfdfdf");
            theNPC.Move(direction[i]);
        }
        theNPC.npc.NpcMove = true;
        */
    }

}
