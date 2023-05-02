using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class timerDisplay : MonoBehaviour
{
    public TMPro.TextMeshProUGUI textDisplay;
        
    void Start()
    {
        textDisplay.text = "";
    }

    IEnumerator TimerTake(int seconds)
    {
        while (seconds > 0)
        {
            textDisplay.text = seconds.ToString();
            yield return new WaitForSeconds(1);
            seconds -= 1;

            if (seconds == 0)
            {
                textDisplay.text = "";
            }
        }
    }

    public void StartTimer(int timerLength)
    {
        if(timerLength > 0)
        {
            StartCoroutine(TimerTake(timerLength));
        }
    }
}
