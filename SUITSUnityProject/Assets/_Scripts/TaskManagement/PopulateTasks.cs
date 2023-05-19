using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Microsoft.MixedReality.Toolkit;
using TMPro;

public class PopulateTasks : MonoBehaviour
{
    [SerializeField] private GameObject _taskDisplayPrefab;
    [SerializeField] private Transform _parentTransform;
    [SerializeField] private GameObject LongDescriptionPopUp;
    [SerializeField] private TMP_Text descriptionTextBox;
    private void OnEnable()
    {
        Populate();
        
    }

    private void OnDisable()
    {
        while (_parentTransform.childCount > 0)
        {
            DestroyImmediate(_parentTransform.GetChild(0).gameObject);
        }
    }

    private void Populate()
    {
        foreach (TaskObject task in TaskManager.Instance.tasklist)
        {
            GameObject taskItem = Instantiate(_taskDisplayPrefab, _parentTransform);
            TMP_Text[] texts = taskItem.GetComponentsInChildren<TMP_Text>();
            StatefulInteractable[] toggles = taskItem.GetComponentsInChildren<StatefulInteractable>();
            taskItem.GetComponent<TaskStorage>().task = task;
            taskItem.GetComponent<TaskStorage>().taskpopulater = GetComponent<PopulateTasks>();
            for (int j = 0; j < texts.Length; j++)
            {
                if (texts[j].name == "ActiveText")
                {
                    if (task.index == TaskManager.Instance.activeTask)
                    {
                        texts[j].text = "Active";
                    }
                    else
                    {
                        texts[j].text = "InActive";
                    }
                }
                if (texts[j].name == "DoneText")
                {
                    if (task.complete)
                    {
                        texts[j].text = "Done";
                    }
                    else
                    {
                        texts[j].text = "Incomplete";
                    }
                }
                if (texts[j].name == "TaskText")
                {
                    
                    texts[j].text = task.shortTask;
                }
            }
            for (int j = 0; j < toggles.Length; j++)
            {
                if (toggles[j].name == "ActiveToggle")
                {
                    if (task.index == TaskManager.Instance.activeTask)
                    {
                        toggles[j].ForceSetToggled(true);
                    }
                    else
                    {
                        toggles[j].ForceSetToggled(false);
                    }
                }
                if (toggles[j].name == "DoneToggle")
                {
                    if (task.complete)
                    {
                        toggles[j].ForceSetToggled(true);
                    }
                    else
                    {
                        toggles[j].ForceSetToggled(false);
                    }
                }
            }
        }
    }

    public void Repopulate()
    {

        while (_parentTransform.childCount > 0)
        {
            DestroyImmediate(_parentTransform.GetChild(0).gameObject);
        }
        Populate();
    

    }

    public void ShowLongDescription(TaskObject task)
    {
        LongDescriptionPopUp.SetActive(true);
        descriptionTextBox.text = task.longTask;
    }
}
