using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
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
            var inputSimulator = serverInput.transform.GetChild(0).gameObject;
            var inputField = inputSimulator.transform.GetChild(3).gameObject;
            var text = inputField.transform.GetChild(2).gameObject;

            // var serverInput = connectionStatus.transform.GetChild(0).gameObject;
            // var textArea = serverInput.transform.GetChild(2).gameObject;
            // var text = textArea.transform.GetChild(0).gameObject;
            
            text.GetComponent<Text>().text = keyboard.text;
        }
    }
}
