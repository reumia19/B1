using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OrderManager : MonoBehaviour
{
	private PlayerManager thePlayer;
	private List<MovingObject> characters;


    // Start is called before the first frame update
	void Start()
	{
		thePlayer = FindObjectOfType<PlayerManager>();
	}

	public void PreloadCharacter()
	{
		characters = ToList();
		Debug.Log(characters.Count);
	}

	public List<MovingObject> ToList()
	{
		List<MovingObject> tempList = new List<MovingObject>();
		MovingObject[] temp = FindObjectsOfType<MovingObject>();
		for(int i = 0; i < temp.Length; i++)
		{
			tempList.Add(temp[i]);
		}
		return tempList;
	}
    // Update is called once per frame
	public void Move(string _name, string _dir)
	{
		for(int i = 0; i < characters.Count; i++)
		{
			if(_name == characters[i].characterName)
			{
				characters[i].Move(_dir);
			}
		}
	}

	public void Turn(string _name, string _dir)
	{
		for(int i = 0; i < characters.Count; i++)
		{
			if(_name == characters[i].characterName)
			{
				characters[i].animator.SetFloat("DirY",0f);
				characters[i].animator.SetFloat("DirX",0f);

				switch(_dir)
				{
					case "UP" :
					characters[i].animator.SetFloat("DirY", 1f);
					break;
					case "DOWN" :
					characters[i].animator.SetFloat("DirY", -1f);
					break;
					case "LEFT" :
					characters[i].animator.SetFloat("DirX", -1f);
					break;
					case "RIGHT" :
					characters[i].animator.SetFloat("DirX", 1f);
					break;

				}
			}
		}
	}
	public void MoveTo(string _name)
	{
		StartCoroutine(MoveToCoroutine(_name));
	}

	IEnumerator MoveToCoroutine(string _name)
	{
		for (int i = 0; i < characters.Count; i++)
		{
			if (_name == characters[i].characterName)
			{
				while(characters[i].transform.position != thePlayer.transform.position)
				{
					yield return new WaitUntil(() => characters[i].queue.Count < 2);
					//x값 차이가 많이 나면 xMove를 TRUE로 바꿈
					if (Mathf.Abs(characters[i].transform.position.x - thePlayer.transform.position.x) > 1)
					{
						if (characters[i].transform.position.x - thePlayer.transform.position.x < 0) characters[i].Move("RIGHT");
						else characters[i].Move("LEFT");

					}
					else if (Mathf.Abs(characters[i].transform.position.y - thePlayer.transform.position.y) > 1)
					{
						if (characters[i].transform.position.y - thePlayer.transform.position.y < 0) characters[i].Move("UP");
						else characters[i].Move("DOWN");
				
					}
						
				}
				
			}
		}
	}

	public void NotMove()
	{
		StopAllCoroutines();
		thePlayer.notMove = true;
	}

	public void Move()
	{
		thePlayer.notMove = false;
	}
}
