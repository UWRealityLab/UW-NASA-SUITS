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
        taskFilePath = Application.dataPath + "/TaskFile.json";
        tasklist = ReadJson();
        /*tasklist = new List<TaskObject>();
        tasklist.Add(new TaskObject());
        tasklist[0].shortTask = "Finish making task manager";
        tasklist[0].longTask = "Your role in completing the Task Manager involves finalizing the user interface, implementing the remaining functionality, conducting thorough testing, and ensuring the application is stable and optimized for the HoloLens platform. Additionally, you will need to document the code and provide clear instructions for users to navigate and utilize the Task Manager effectively.\n"+
                                "By successfully completing this project, you will contribute to enhancing task management efficiency and user experience in the augmented reality space, empowering HoloLens users to seamlessly organize and track their tasks in a visually engaging and immersive manner.";
        tasklist[0].index = 0;
        tasklist.Add(new TaskObject());
        tasklist[1].shortTask = "Go frolick in a pile of rocks in Houston";
        tasklist[1].longTask = "The task \"Go frolick in a pile of rocks in Houston\" is a delightful adventure that invites you to immerse yourself in a playful and whimsical experience.Set in the vibrant city of Houston, this task encourages you to embrace your inner child and indulge in the simple joys of life." +
            "Houston, known for its diverse landscapes, offers a unique opportunity to find a pile of rocks and turn it into your personal playground.As you frolic amidst the rocks, you can let your imagination run wild, creating stories and scenarios, relishing the freedom and carefree spirit of the moment.";
        tasklist[1].index = 1;
        tasklist.Add(new TaskObject());
        tasklist[2].shortTask = "Eat free food";
        tasklist[2].longTask = "The task \"Go frolick in a pile of rocks in Houston\" is a delightful adventure that invites you to immerse yourself in a playful and whimsical experience.Set in the vibrant city of Houston, this task encourages you to embrace your inner child and indulge in the simple joys of life." +
            "Houston, known for its diverse landscapes, offers a unique opportunity to find a pile of rocks and turn it into your personal playground.As you frolic amidst the rocks, you can let your imagination run wild, creating stories and scenarios, relishing the freedom and carefree spirit of the moment.";
        tasklist[2].index = 2;
        tasklist.Add(new TaskObject());
        tasklist[3].shortTask = "Task: Write Poor Quality Code Description: Your task is to deliberately write poorly structured and inefficient code. Embrace practices that violate industry standards and best practices, aiming to create code that is difficult to read, understand, and maintain. Consider the following guidelines: 1. Ignore code organization: Avoid using functions or classes, and keep all code in a single file. 2. Use cryptic variable and function names: Opt for names that provide no meaningful context or description. 3. Avoid commenting: Omit any comments or documentation, making it challenging for others to comprehend your code's purpose. 4. Neglect error handling: Ignore potential errors or exceptions, allowing them to propagate unhandled. 5. Disregard code optimization: Prioritize writing code quickly over efficiency, resulting in poor performance and excessive resource consumption. Remember, the goal is to produce code that is convoluted, hard to maintain, and prone to errors.";
        tasklist[3].longTask = "The task \"Go frolick in a pile of rocks in Houston\" is a delightful adventure that invites you to immerse yourself in a playful and whimsical experience.Set in the vibrant city of Houston, this task encourages you to embrace your inner child and indulge in the simple joys of life." +
            "Houston, known for its diverse landscapes, offers a unique opportunity to find a pile of rocks and turn it into your personal playground.As you frolic amidst the rocks, you can let your imagination run wild, creating stories and scenarios, relishing the freedom and carefree spirit of the moment.";
        tasklist[3].index = 3;
        activeTask = 1;*/

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
