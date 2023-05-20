using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using System.IO;
using System.Text;
using System;

public class TaskManager : Singleton<TaskManager>
{
    public List<TaskObject> tasklist;
    public int activeTask;
    [SerializeField]
    private int maxCharsShortTask = 50;
    [SerializeField]
    private int maxCharsLongTask = 10000;
    [SerializeField]
    private string taskFilePath;
    void Start()
    {
        //taskFilePath = Application.dataPath + "/TaskFile.json";
        //tasklist = ReadJson();
        tasklist = new List<TaskObject>();
        tasklist.Add(new TaskObject());
        tasklist[0].shortTask = "UIA Egress";
        tasklist[0].longTask = "Open up the UIA egress screen from the top buttons on the dashboard or the hand menu. There it should show you which switches are flipped in the wrong position. You should then work to flip the indicated switch to the correct position.";
        tasklist[0].index = 0;
        tasklist.Add(new TaskObject());
        tasklist[1].shortTask = "Geological Scan";
        tasklist[1].longTask = "Press the spectroscopy button on top of the dashboard, or open it from the hand menu. Then you will see the spectroscopy window pop up. You can then press past spectroscopies to look at the past samples. The latest scan should show up and you can select one to look at the data from the latest scan (which will be the last one in the list)";
        tasklist[1].index = 1;
        tasklist.Add(new TaskObject());
        tasklist[2].shortTask = "Navigate Rover";
        tasklist[2].longTask = "Listen to the test coordinator as they tell you which points of interest to navigate the rover to. You can press Navigate Rover on the navigation panel of the dashboard, then navigate to saved waypoints, then press the waypoint of the point of interest you are asked to navigate to and press send rover.";
        tasklist[2].index = 2;
        tasklist.Add(new TaskObject());
        tasklist[3].shortTask = "Navigate Home";
        tasklist[3].longTask = "Use the breadcrumb trail to return home. Press on navigate astronaut, then return home. Leave Track Back highlighted, then press navigate. A trail home should appear in front of your, showing the path that you took back. You are welcome to take an easier path if you see fit, but this will help you not get lost!";
        tasklist[3].index = 3;
        activeTask = 0;

    }

    
    public List<TaskObject> ReadJson()
    {

        try
        {
            //using StreamReader reader = new(taskFilePath);
            //var json = reader.ReadToEnd();
            byte[] data = UnityEngine.Windows.File.ReadAllBytes(taskFilePath);
            string json = Encoding.ASCII.GetString(data);
            List<TaskObject> tasks = JsonConvert.DeserializeObject<List<TaskObject>>(json);
            for (int i = 0; i < tasks.Count; i++)
            {
                tasks[i].index = i;
                if (tasks[i].shortTask.Length > maxCharsShortTask)
                {
                    tasks[i].shortTask = tasks[i].shortTask.Substring(0, maxCharsShortTask - 4) + " ...";
                }
                if (tasks[i].longTask.Length > maxCharsLongTask)
                {
                    tasks[i].longTask = tasks[i].longTask.Substring(0, maxCharsLongTask - 4) + " ...";
                }
            }
            tasks.Add(new TaskObject());
            tasks[tasks.Count-1].longTask = "Done looking at " + taskFilePath;
            tasks[tasks.Count-1].index = tasks.Count;
            return tasks;
        }
        catch (FileNotFoundException)
        {
            List<TaskObject> tasks = new List<TaskObject>();
            tasks.Add(new TaskObject());
            tasks[0].longTask = "File not found at " + taskFilePath;
            tasks[0].index = 0;
            return tasks;
        }
        catch (JsonException)
        {
            List<TaskObject> tasks = new List<TaskObject>();
            tasks.Add(new TaskObject());
            tasks[0].shortTask = "Invalid JSON format. Please ensure the JSON file is correctly formatted.";
            tasks[0].index = 0;
            return tasks;
        }
        catch(Exception ex)
        {
            List<TaskObject> tasks = new List<TaskObject>();
            tasks.Add(new TaskObject());
            tasks[0].longTask = ex.ToString();
            tasks[0].index = tasks.Count;
            tasks.Add(new TaskObject());
            tasks[tasks.Count-1].longTask = "File searched at " + taskFilePath;
            tasks[tasks.Count-1].index = tasks.Count;
            return tasks;
            
        }
        

    }
    
}
