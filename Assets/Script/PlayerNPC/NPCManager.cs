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

    private NDialogueManager nDialogueManager;
    PlayerManager thePlayer;
    string currentDirection;
    Animator theAnim;
    // Start is called before the first frame update
    void Start()
    {
        queue = new Queue<string>();
        nDialogueManager = FindObjectOfType<NDialogueManager>();
        thePlayer = FindObjectOfType<PlayerManager>();
        theAnim = GetComponent<Animator>();
         StartCoroutine(MoveCoroutine());
     
    }

    private void Update()
    {
        base.stop = nDialogueManager.isAction;
        if (nDialogueManager.isAction)
        {
            switch (FindPlayer())
            {
                case "UP":
                    vector.y = 1f;
                    break;
                case "DOWN":
                    vector.y = -1f;
                    break;
                case "RIGHT":
                    vector.x = 1f;
                    break;
                case "LEFT":
                    vector.x = -1f;
                    break;

            }
            theAnim.SetFloat("DirX", vector.x);
            theAnim.SetFloat("DirY", vector.y);
        }

    }

    string FindPlayer()
    {
        Vector3 vec = thePlayer.transform.position - this.transform.position;

        string newDirection = "";

        //if (thePlayer.transform.position == this.transform.position)
        if(vec.x != 0) //X가 양수라는 건 플레이어가 오른쪽에 있다는 뜻
        {
            if (vec.x > 0)
                newDirection = "RIGHT";
            else
                newDirection = "LEFT";
        }
        else
        {
            if (vec.y > 0)
                newDirection = "UP";
            else
                newDirection = "DOWN";
        }

        if(currentDirection != newDirection)
        {
            Debug.Log("See " + newDirection);
            currentDirection = newDirection;
        }

        return currentDirection;
    }

   /* void FindObject()
    {
        if (animator.GetFloat("DirY") == 1) // 버티컬 버튼이 눌렸고, 값이 양수이다.(UP)
        {
            dirVec = Vector3.up;
        }
        else if (animator.GetFloat("DirY") == -1)// 버티컬 버튼이 눌렸고, 값이 음수이다.(DOWN)
        {
            dirVec = Vector3.down;
        }
        else if (animator.GetFloat("DirX") == 1)// 호라이즌 버튼이 눌렸고, 값이 양수이다.(RIGHT)
        {
            dirVec = Vector3.right;
        }
        else if (animator.GetFloat("DirX") == -1)// 호라이즌 버튼이 눌렸고, 값이 음수이다.(LEFT)
        {
            dirVec = Vector3.left;
        }

        //Ray 방향과 앞의 사물을 인지하기 위해 사용한다. 
        //Debug.DrawRay(rigid.position, dirVec * 0.7f, new Color(0, 1, 0));
        //RaycastHit2D rayHit = Physics2D.Raycast(rigid.position, dirVec, 0.7f, LayerMask.GetMask("Object"));
    }*/

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
