# RKE - Remote Keyless Entry System
## Introduction
A Remote Keyless Entry System is an electronic lock that controls vehicle or building access without the use of a typical mechanical key. "Keyless entry" or "remote central locking" are other terms for "remote keyless system" (RKS). It's a key that can be triggered by a handheld device or by proximity. It works in the same way as a traditional automobile key but without the need for physical touch. When the remote is within range of the vehicle, hitting a button on the remote can lock or unlock the doors, among other things.
## Research
-   RKE (remote keyless entry) is an electronic access control system that may be operated from a distance. RKEs, which are commonly used to remotely lock or unlock doors, need the end user to perform an action that causes a physical or software key fob to send a radio signal to a receiver that controls an electronic lock. The action is usually performed by pressing a button on a physical fob or a mobile app.
-   Remote keyless entry (RKE), which is commonly used to protect vehicles from theft, contrasts with passive keyless entry (PKE), which does not require any action on the end user's part. Most RKEs operate at 315 MHz for North American-made vehicles and 433.92 MHz for European, Japanese, and Asian vehicles.
-   Since the mid-1990s, modern systems have used encryption as well as rotating entry codes to prevent car thieves from intercepting and spoofing the signal. Each time the lock is accessed, a controller chip in the receiver changes the exact frequency required for RKE, a security feature known as "rolling code" or "hopping code."
## Features
-   When the button is pressed ONCE, the car will be locked.
-   When the button is pressed TWICE, the car will be unlocked.
-   When the button is pressed THREE times, it will activate or deactivate the alarm.
-   When the button is pressed FOUR times, it will approach light.
## 5W's & 1H
![5W 1H](https://user-images.githubusercontent.com/98872937/157816966-79f09c7d-0bc4-4d61-8dde-210d7bcc9501.jpg) 
## SWOT Analysis
|Strength|Weakness|Opportunities|Threats|
|:--:|:--:|:--:|:--:|
|Encryption is used|Limited user range|Scope in automobiles|Less accurate timing|
|Better access control|Handled carefully|Car safety|Possibilty to manipulate|
|No Interaction with Humans|Key battery|Cost effective|Cannot Multitask in same time|
|High Security|Chance of Failure|Emerging Technology|No long life|
## High Level Requirement
|ID|Description|
|:--:|:--:|
|HLR01|User will be able to locked the car|
|HLR02|User will be able to unlocked the car|
|HLR03|User will be able to activate or deacticate the alarm|
|HLR04|User will be able to approach light|
## Low Level Requirement
|ID|HLR ID|Description|
|:--:|:--:|:--:|
|LLR1.1|HLR01|If the user button is pressed ONCE, LEDS ORANGE and GREEN, as well as the other LEDs, will turn ON|
|LLR1.2|HLR01|If the user button is pressed ONCE, LED RED, BLUE, as well as the other LEDs, will turn ON|
|LLR2.1|HLR02|If the user button is pressed TWICE, LED ORANGE, GREEN, as well as the other LEDs, will turn OFF|
|LLR2.2|HLR02|If the User Button is pressed TWICE, LED RED, BLUE, as well as the other LEDs, will turn OFF|
|LLR3.1|HLR03|If the User Button is pressed THREE times, All LED's in CLOCKWISE manner, will turn ON|
|LLR3.2|HLR03|GREEN,ORANGE,RED,BLUE,GREEN|
|LLR4.1|HLR04|If the User Button is pressed FOUR times, All LED's in ANTI-CLOCKWISE manner, will turn ON|
|LLR4.2|HLR05|GREEN,ORANGE,RED,BLUE,GREEN|
## Architecture
### Behavioural Diagram
#### High Level Flow Chart
![High level Flow Chart](https://user-images.githubusercontent.com/98877997/157836085-1e196996-eacc-407a-bdd9-903456561390.jpg)
#### Low Level Flow Chart
![Low Level Flow Chart](https://user-images.githubusercontent.com/98877997/157838690-d4a80bf8-e9df-46be-8d61-80f34355a396.jpg)
### Structural Diagram
#### High Level Structural Diagram
![High level UML](https://user-images.githubusercontent.com/98877997/157842248-7c5e07ee-ab7f-4817-855b-11b62456c033.jpg)
#### Low Level Structural Diagram
![Low level UML](https://user-images.githubusercontent.com/98877997/157847638-a6216e60-f3f5-4b32-8536-37fcd84eb7b8.jpg)
## Test Plan
### High Level Test Plan
| Test Id | Description | Exp I/P | Exp O/P | Actual O/P | Passed/Failed |
|---------|-------------|---------|---------|------------|---------------|
| HL01 | Status of Car lock | User 1 Button Press | Car locked | Car locked | Passed |
| HL02 | Status of car unlock | User 2 Button Press | Car unlocked | Car unlocked | Passed |
| HL03 | Car Alarm Status | User 3 Button Press | Alarm Activated | Alarm Activated | Passed |
| HL04 | Car Battery Status | User 4 Button Press | Battery Displayed | Battery Displayed | Passed |
### Low Level Test Plan
| Test Id | Description | Exp I/P | Exp O/P | Actual O/P | Passed/Failed |
|---------|-------------|---------|---------|------------|---------------|
| LL01 | Check for lock | User prsses the Button Once | All LED's turn On | All LED's turn On |Passed|
| LL02 | Check for unlock | User prsses the Button Twice | All LED's turn Off | All LED's turn Off |Passed|
| LL03 | Check for Alarm | User presses the Button Thrice | LED's On in clockwise direction | LED's On in clockwise direction |Passed|
| LL04 | Check for Battery | User presses the Button Four times | LED's On in anticlockwise direction | LED's On in anticlockwise direction |Passed| 
## Applications
-   It provides vehicle owners with a degree of convenience, making the task of physically inserting a key unnecessary.
-   If someone tries to unclock the vehicle without pressing key buttons, then the key alarms get activated and user gets aware of the situation.
-   It is used in the smart home applications. A keyless entry system offers enhanced security and greater convenience for people with mobility issues and those who find themselves arriving at the front door with their hands full. 
