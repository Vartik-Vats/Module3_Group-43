# BiCom System
## Content

1 Description
-   1.1 Introduction
-   1.2 Research
-   1.3 Features
-   1.4 5W 1H
-   1.5 SWOT Analysis

2 Requirements
-   2.1 Highlevel requirements
-   2.2 Lowlevel requirements

3 Architectures

3.1 Behavioural diagram
-   3.1.1 High level FLOW CHART behavioural diagram
-   3.1.2 Low level FLOW CHART behavioural diagram

3.2 Structural diagram
-   3.2.1 High level structural diagram
-   3.2.2 Low level structural diagram

4 Test plans
-   4.1 Highlevel testplan
-   4.2 Lowlevel testplan

5 Applications
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## 1 Description
### 1.1 Introduction
The term bi-com, is also called keyless entry or remote central locking, refers to a lock that uses an electronic remote control as a key which is activated by a handheld device or automatically by proximity. Widely used in automobiles, an RKS performs the functions of a standard car key without physical contact. When within a few yards of the car, pressing a button on the remote can lock or unlock the doors, and may perform other functions.
### 1.2 Research
-   BiCom system ,is a system that is designed to remotely lock or unlock the automobiles, RKE(Remote Keyless entry)system operates by broadcasting radio waves on a particular  frequency unidirectionally,RKE systems implement encryption algorithms to prevent car thieves from intercepting and spoofing the telegrams..
-   BiCom system, which is nothing but the simple extension of the unidirectional RKE system into bidirectional RKE system.
-   BiCom system works in both the ways, as like RKE it sends the data but also recieve the data from the vehicle in which it is being implimented.
## Features
-   It shall display window satus of car for one User Button Click
-   It shall display alarm satus of car Two User Button Clicks
-   It shall display battery information of car for Three User Button Clicks
-   It shall display door satus of car for Four User Button Clicks
### 1.4 5W's & 1H
![5W 1H](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom%20System/5_ImagesAndVideos/5W1H%20Questions.jpg) 
### 1.5 SWOT Analysis
|Strength|Weakness|Opportunities|Threats|
|:--:|:--:|:--:|:--:|
|Data encryption is used for security|Limited user range|Scope in automobiles|more delay between functionalities|
|overall handy functionality|battery replacement required |Car safety|can be manipulate|
|No Human interaction required|water and dust can affect the system|user friendy system|Cannot Multitask in same time|
|High Security|user have to wait for next functionality|cost effective|battery replacement required frequently|
## 2 Requirements
### 2.1 High Level Requirement
|ID|Description|
|:--:|:--:|
|HLR01|The system shall print window status when blue switch press once|
|HLR02|The system shall print alarm status when blue switch press two times|
|HLR03|The system shall print car battery info when blue switch press three times|
|HLR04|The system shall print door status when blue switch press four times|
### 2.2 Low Level Requirement
|LLR ID|Description|HLR ID|
|:--:|:--:|:--:|
|LLR01.1|When the button is pressed all the LED's shall be on|HLR01|
|LLR01.2|All the LED's shall be on at the same time-Green-->on Orange-->on Red-->on Blue-->on|HLR01|
|LLR02.1|When the button is pressed all the LED's shall be off at the same time|HLR02|
|LLR02.2|All the LED's shall be off at the same time-Green-->off Orange-->off Red-->off Blue-->off|HLR02|
|LLR03.1|When the button is pressed all the LED's shall be on|HLR03|
|LLR03.2|When the button is pressed LED's shall be on in clockwise direction|HLR03|
|LLR04.1|When the button is pressed all the LED's shall be on|HLR04|
|LLR04.2|When the button is pressed LED's shall be on in anti-clockwise direction|HLR04|
## 3 Architectures
## 3.1 Behavioural diagram
### 3.1.1 High level FLOW CHART behavioural diagram:
![HLFCBD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom%20System/5_ImagesAndVideos/hlflowchart.png)
### 3.1.2Low level FLOW CHART behavioural diagram:
![LLFCBD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom%20System/5_ImagesAndVideos/llflowchart.png)
## 3.2 Structural diagram
### 3.2.1 High level structural diagram
![HLSD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom%20System/5_ImagesAndVideos/hlstructural.png)
### 3.2.2 Low level structural diagram
![LLSD](https://raw.githubusercontent.com/Vartik-Vats/Module3_Group-43/main/2_BiCom%20System/5_ImagesAndVideos/llstructural.png)
## 4 Test plans
### 4.1 High Level Test Plan
| Test Id | Description | Exp I/P | Exp O/P | Actual O/P | Passed/Failed |
|---------|-------------|---------|---------|------------|---------------|
| HL01 | Status of Window | User 1 Button Press | Window Activated | Window Activated | Passed |
| HL02 | Status of Alarm | User 2 Button Press | Alarm Detected | Alarm Detected | Passed |
| HL03 | Status of Battery | User 3 Button Press | Battery Displayed | Battery Displayed | Passed |
| HL04 | Status of Door | User 4 Button Press | Door Detected | Door Detected | Passed |
### 4.2 Low Level Test Plan
| Test Id | Description | Exp I/P | Exp O/P | Actual O/P | Passed/Failed |
|---------|-------------|---------|---------|------------|---------------|
| LL01 | Check for Window | User prsses the Button Once | All LED's turn On | All LED's turn On |  Passed |
| LL02 | Check for Alarm | User prsses the Button Twice | All LED's turn Off | All LED's turn Off | Passed |
| LL03 | Check for Battery | User presses the Button Thrice | LED's On in clockwise direction | LED's On in clockwise direction | Passsed |
| LL04 | Check for Door | User presses the Button Four times | LED's On in anticlockwise direction | LED's On in anticlockwise direction | Passed | 
## 5 Application
