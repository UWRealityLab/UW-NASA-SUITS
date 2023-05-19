using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TaskDisplayHandMenu : MonoBehaviour
{
    [SerializeField] private TMP_Text ShortDescriptionTextBox;
    [SerializeField] private TMP_Text LongDescriptionTextBox;
    private void OnEnable()
    {

        TaskObject task = TaskManager.Instance.tasklist[TaskManager.Instance.activeTask];
        LongDescriptionTextBox.text = task.longTask;
        ShortDescriptionTextBox.text = task.shortTask;
    }
}
