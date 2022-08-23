using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class OpenKeyboard : MonoBehaviour
{
    [SerializeField]
    private TouchScreenKeyboard keyboard;
    private GameObject SceneObjects;
    private GameObject connectionStatus;

    public void OpenSystemKeyboard()
    {
        keyboard = TouchScreenKeyboard.Open("", TouchScreenKeyboardType.Default, false, false, false, false);
    }

    private void Update()
    {
        if (keyboard != null)
        {
            // Do stuff with keyboardText
            SceneObjects = GameObject.Find("SceneObjects");
            connectionStatus = SceneObjects.transform.GetChild(2).gameObject;
            var serverInput = connectionStatus.transform.GetChild(0).gameObject;
            var textArea = serverInput.transform.GetChild(2).gameObject;
            var text = textArea.transform.GetChild(0).gameObject;
            Debug.Log("text: " + text.GetComponent<TextMeshPro>().text);
            Debug.Log(keyboard.text);
            text.GetComponent<TextMeshPro>().SetText(keyboard.text);
        }
    }
}
