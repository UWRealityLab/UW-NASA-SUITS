using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace RuntimeDebugger
{
    public class Logger : MonoBehaviour
    {
        private static List<TextMeshProUGUI> TMPs = new List<TextMeshProUGUI>();

        public static void Log(string text)
        {
            foreach (TextMeshProUGUI TMP in TMPs)
            {
                TMP.text += text;
                TMP.text += '\n';
            }
        }

        public static void AddListener(TextMeshProUGUI TMP)
        {
            TMPs.Add(TMP);
        }
    }
}
