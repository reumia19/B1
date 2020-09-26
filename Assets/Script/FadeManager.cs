using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FadeManager : MonoBehaviour
{
    public SpriteRenderer white;
    public SpriteRenderer black;
    private Color color;
    public bool isFade;

    private WaitForSeconds waitTime = new WaitForSeconds(0.01f);

    // Update is called once per frame

    public void FadeOut(float _speed =0.1f)
    {
        StartCoroutine(FadeOutCoroutine(_speed));
    }
    IEnumerator FadeOutCoroutine(float _speed)
    {
        color = black.color;

        while (color.a < 1f)
        {
            color.a += _speed;
            black.color = color;
            yield return waitTime;
        }
        isFade = true;
    }

    public void FadeIn(float _speed = 0.1f)
    {
        StopAllCoroutines();
        StartCoroutine(FadeInCoroutine(_speed));
    }
    IEnumerator FadeInCoroutine(float _speed)
    {
        yield return new WaitForSeconds(0.1f);
        color = black.color;

        while (color.a > 0f)
        {
            color.a -= _speed;
            black.color = color;
            yield return waitTime;
        }
        isFade = false;
    }
}
