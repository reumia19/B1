using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[System.Serializable]
public class NPCMove
{
	[Tooltip("체크하면 NPC움직임")]
	public bool NPCmove;

	public string[] direction;

	[Range(1,5)] [Tooltip("빈도")]
	public int frequency;//얼마나 빠른 속도로 움직일지

}

public class NPCManager : MovingObject
{
	[SerializeField]
	public NPCMove npc;

    // Start is called before the first frame update
    void Start()
    {
        queue = new Queue<string>();
         StartCoroutine(MoveCoroutine());
     
    }

    IEnumerator MoveCoroutine()
    {
        if(npc.direction.Length != 0)
        {
            for(int i = 0; i < npc.direction.Length;i++)
            {
                switch(npc.frequency)
                {
                    case 1:
                        yield return new WaitForSeconds(4f);
                        break;
                    case 2:
                        yield return new WaitForSeconds(3f);
                        break;
                    case 3:
                        yield return new WaitForSeconds(2f);
                        break;
                    case 4:
                        yield return new WaitForSeconds(1f);
                        break;
                    case 5:
                        break;
                }
                //실질적인 이동 구간
                yield return new WaitUntil(()=>queue.Count < 2);//true가 될때까지 존버

                base.Move(npc.direction[i],npc.frequency);
                if(i == npc.direction.Length-1)
                {
                    i = -1;
                }
            }
        }
    }

}
