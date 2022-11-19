using System.Collections.Generic;
using UnityEngine;
using TMPro;

namespace RuntimeDebugger
{
    /// <summary>
    /// Custom logger that stores logs and updates all logger listeners when logs are updated
    /// </summary>
    public class Logger : MonoBehaviour
    {
        // Listeners with type TextMeshProUGUI
        private static List<TextMeshProUGUI> TMPs = new List<TextMeshProUGUI>();

        /// <summary>
        /// Add logs and update all the listeners
        /// </summary>
        /// <param name="text">Text message</param>
        public static void Log(string text)
        {
            foreach (TextMeshProUGUI TMP in TMPs)
            {
                TMP.text += text;
                TMP.text += '\n';
            }
        }

        /// <summary>
        /// Add a new Listener
        /// </summary>
        /// <param name="TMP">A TextMeshProUGUI type listener</param>
        public static void AddListener(TextMeshProUGUI TMP)
        {
            TMPs.Add(TMP);
        }
    }
}
