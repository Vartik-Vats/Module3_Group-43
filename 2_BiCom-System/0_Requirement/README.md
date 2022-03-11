# BiCom System
## Introduction
The term bi-com, is also called keyless entry or remote central locking, refers to a lock that uses an electronic remote control as a key which is activated by a handheld device or automatically by proximity. Widely used in automobiles, an RKS performs the functions of a standard car key without physical contact. When within a few yards of the car, pressing a button on the remote can lock or unlock the doors, and may perform other functions.
## Research
-   BiCom system ,is a system that is designed to remotely lock or unlock the automobiles, RKE(Remote Keyless entry)system operates by broadcasting radio waves on a particular  frequency unidirectionally,RKE systems implement encryption algorithms to prevent car thieves from intercepting and spoofing the telegrams.
-   BiCom system, which is nothing but the simple extension of the unidirectional RKE system into bidirectional RKE system.
-   BiCom system works in both the ways, as like RKE it sends the data but also recieve the data from the vehicle in which it is being implimented.
## Features
-   It shall display window satus of car for one User Button Click
-   It shall display alarm satus of car Two User Button Clicks
-   It shall display battery information of car for Three User Button Clicks
-   It shall display door satus of car for Four User Button Clicks
## 5W's & 1H
![5W1H Questions](https://user-images.githubusercontent.com/98877997/157949953-19fe5da6-d099-44d4-bcdf-ae8b24f4186e.jpg)
## SWOT Analysis
|Strength|Weakness|Opportunities|Threats|
|:--:|:--:|:--:|:--:|
|Data encryption is used for security|Limited user range|Scope in automobiles|more delay between functionalities|
|overall handy functionality|battery replacement required |Car safety|can be manipulate|
|No Human interaction required|water and dust can affect the system|user friendy system|Cannot Multitask in same time|
|High Security|user have to wait for next functionality|cost effective|battery replacement required frequently|
## High Level Requirement
|ID|Description|
|:--:|:--:|
|HLR01|The system shall print window status when blue switch press once|
|HLR02|The system shall print alarm status when blue switch press two times|
|HLR03|The system shall print car battery info when blue switch press three times|
|HLR04|The system shall print door status when blue switch press four times|
## Low Level Requirement
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
