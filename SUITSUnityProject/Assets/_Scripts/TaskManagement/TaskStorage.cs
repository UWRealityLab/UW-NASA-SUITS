using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TaskStorage : MonoBehaviour
{
    public TaskObject task;
    public PopulateTasks taskpopulater;
    // Start is called before the first frame update
    public void setActive()
    {
        if (TaskManager.Instance.activeTask != task.index)
        {
            TaskManager.Instance.activeTask = task.index;
            taskpopulater.Repopulate();
        }
        
    }
    public void toggleComplete(bool state)
    {
        task.complete = state;
        //taskpopulater.Repopulate();
    }
    public void showLongDescription()
    {
        taskpopulater.ShowLongDescription(task);
    }
}
