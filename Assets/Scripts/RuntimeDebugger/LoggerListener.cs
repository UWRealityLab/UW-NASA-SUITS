using UnityEngine;
using TMPro;

public class LoggerListener : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI TMP;

    private void Awake()
    {
        TMP = GetComponent<TextMeshProUGUI>();
        TMP.text = "";
    }

    private void Start()
    {
        RuntimeDebugger.Logger.AddListener(TMP);
    }
}
