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
        tasklist[0].longTask = @"We are simulating the procedures for interfacing with the Umbilical Interface Assembly to prepare a lunar airlock for egress. Press the UIA Egress button on the top right of the dashboard, or on the hand menu, to open the UIA panel. It should appear next to you slightly below eye level, so look around if you can’t see it. Then, flip the switches highlighted yellow to proceed to the next step. If this is broken, feel free to follow the written procedure below in order to complete the task:\
UIA Procedures\
1.Power on EMU-1\
  1.1.Switch EMU - 1 Power to ON\
  1.2.When the SUIT is booted(emu1_is_booted), proceed \
2.Prepare UIA\
  2.1.Switch O2 Vent to OPEN\
  2.2.When UIA Supply Pressure(uia_ < 23 psi, proceed)\
  2.3.Switch O2 Vent to CLOSE\
3.Purge N2\
  3.1.Switch O2 Supply to OPEN\
  3.2.When UIA Supply Pressure is > 3000 psi, proceed\
  3.3.Switch O2 Supply to CLOSE\
  3.4.Switch O2 Vent to OPEN\
  3,5.When UIA Supply Pressure is < 23 psi, proceed\
  3.6.Switch O2 Vent to CLOSE\
4.Initial O2 Pressurization\
  4.1.Switch O2 Supply to OPEN\
  4.2.When UIA Supply Pressure is > 1500 psi, proceed\
  4.3.Switch O2 Supply to CLOSE\
5.Fill EMU Water\
  5.1.Dump waste water\
    5.1.1.Switch EV - 1 Waste to OPEN\
    5.1.2.When water level if < 5 %, proceed\
    5.1.3.Switch EV - 1 Waste to CLOSE\
  5.2 Refill EMU Water\
    5.2.1.Switch EV - 1 Supply to OPEN\
    5.2.2.When water level is > 95 %, proceed\
    5.2.3.Switch EV - 1 Supply to CLOSE\
6.Depressurize Airlock to 10.2 psi\
  6.1.Switch Depress Pump to ON\
  6.2.IF the pump faults:\
    6.2.1.Switch the Depress Pump to OFF\
    6.2.2.When the fault goes away, proceed\
    6.2.3.Switch the Depress Pump to ON\
  6.3 When airlock pressure is < 10.2 psi, switch to OFF proceed\
7.Complete EMU Pressurization\
  7.1 Switch O2 Supply to OPEN\
  7.2 When UIA Supply Pressure > 3000 psi, proceed\
  7.2 Switch O2 Supply to CLOSE\
8.Complete Airlock Depressurization\
  8.1 Switch Depress Pump to ON\
  8.2 When airlock pressure is < 0.1 psi, proceed\
  8.3 Switch Depress Pump to OFF\
9.UIA Procedures are complete, exit the airlock\
";
        tasklist[0].index = 0;
        tasklist.Add(new TaskObject());
        tasklist[1].shortTask = "Geological Scan";
        tasklist[1].longTask = @" We are simulating a crew member arriving at an area of interest and using an XRF spectrometer to conduct elemental analysis of the lunar terrain in this area.If the UIA window is still open, you can toggle it off by pressing the same button you used to open the UIA window.Open the spectroscopy scan window by pressing the “Spectroscopy” button above the dashboard or in the hand menu.Then, to view any completed scans, press the “view past scans” button.When you scan a rock, the scan should pop up in this window.Below is the procedure for scanning the rocks:
Procedures:
1.Select and scan one of the marked samples in the designated area
2.Verbally confirm that you have received composition information for the scanned sample
3.Relay requested composition information to the accompanying SUITS team member when asked to do so
3.1 The information requested will be the percentage of a specific element in the sample that was scanned
4.Continue with next scan after the requested information has been relayed.
5.The task is complete when at least 3 samples have been scanned and verified or when the SUITS team member has announced the task completion.
5.1 Time permitting, additional scans may be collected.";

            tasklist[1].index = 1;
        tasklist.Add(new TaskObject());
        tasklist[2].shortTask = "Navigate Rover";
        tasklist[2].longTask = @"
We are simulating a remote rover commanding task on a lunar surface. Below is the procedure for the task, with help on how to navigate the rover through our interface. To navigate the rover to a point of interest, press “navigate rover” or “navigate astronaut” in the navigation panel, then press saved waypoints. The points of interest should already be preloaded, and you can select one and press “send rover”. If they are not preloaded, go back to the navigation window by pressing the x in the top right corner. Then press “add waypoints”, and “points of interest”. Now when you go back to the navigate astronaut -> saved waypoints window, you should see the points of interest.
1.	The university team member will receive a pre-determined point of interest to relay to the design evaluator
2.	The design evaluator may then proceed with rover commanding in the UI
3.	When the rover arrives to its destination, the recall command may be sent to return the rover to its original destination. 
a.	There is a recall button in the navigation main dashboard on the bottom right.
4.	The task is complete when the rover has returned or when the SUITS team member has announced the task completion.
5.	The team may then begin the ingress procedure using the “navigate astronaut” feature of their design.

"; 
        tasklist[2].index = 2;
        tasklist.Add(new TaskObject());
        tasklist[3].shortTask = "Navigate Home";
        tasklist[3].longTask = @"
To return home, press the “navigate astronaut button”, then “return home”, then the button on the bottom. Make sure to leave “track back” selected to use the breadcrumb feature. The path displayed to return will be the path you took out from home base. You do not have to follow the exact path and can feel free to walk next to it or cut corners as you see fit. The path will not render right in front of you to maximize visibility where you are stepping. It is recommended to keep the area around you extremely well-lit for the path to remain accurate!
"; 
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
