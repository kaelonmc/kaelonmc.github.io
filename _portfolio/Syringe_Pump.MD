---
title: "Syringe Pump"
excerpt: "A stepper motor-driven functional syringe pump made as the final project for DF 2100."
header:
  image: /assets/img/Syringe_Pump.jpg
  teaser: /assets/img/Syringe_Pump_Teaser.jpg
   
---

## Background
Syringe pumps are biomedical devices designed to administer medication and small amounts of fluid to a patient via an intravenous line. The benefit of using a syringe pump is its ability to introduce a precise dosage of medicine into a patient’s body at a defined flow rate, which is necessary for certain conditions. Standard syringe pumps used in hospitals and other medical settings range in cost from $1500 up to $7000. Many patients, including NICU babies and chemotherapy patients, require this type of technology for treatments, however its cost makes it financially inaccessible for many. Several measures have been taken to utilize additive manufacturing and 3D printing to develop syringe pumps, infusion pumps, and other technology that can function the same way a standard pump would. This method is also more cost effective, as 3D printing is inexpensive, along with the other components required to operate the pump, such as an Arduino, motor, buttons, a potentiometer, and a switch. The use of these alternative solutions for a syringe pump in hospitals and other medical settings would assist in eliminating the financial barrier for many patients without compromising quality of care.

## Design Description
The mechanics of a syringe, in that a plunger is pushed and pulled linearly to move liquid within the barrel, align with that of a linear actuator, which converts rotational motion into a linear push or pull action. Because of this similarity, a linear actuator can be used as the main body of a syringe pump so long as the syringe’s barrel is stabilized, and the plunger is attached to the moving part of the actuator. 
This design includes two support pieces that have been elongated and include “U” shaped holders at the top which can hold both syringes, despite the different diameters. This is because the barrel flange of both syringes is longer than the width of the middle support piece which prevents the barrel from moving forward during the pump process. The carriage – otherwise known as the part of the linear actuator that moves with a pull and push motion – has also been elongated and includes a slot at the top where the plunger flange will be inserted. The linear movement of the carriage will move the plunger of the syringe, pushing the liquid out of the barrel as the barrel is held in place.
This design also features three buttons, a knob, and an LED light on the side of the enclosure as well as a switch incorporated into the linear actuator. Of the three buttons, one is a latching button that acts as a ‘go’ or ‘pause’ command for the linear actuator. In its unlatched state, the syringe pump is ‘paused’ and will not move. When the button is pressed, it clicks, becoming latched, which starts the motion of the syringe pump. The other two buttons function as directional motion commands, where one moves the linear actuator at its maximum speed clockwise while the other button does the same but counterclockwise. Next to the buttons is a potentiometer which controls the speed of the linear actuator, but only in a forward direction. Finally, the last feature on the side of the enclosure containing all of the device’s peripherals is an LED light that appears green when the syringe pump is moving, yellow when it is ‘paused,’ and red when the switch is pressed. The switch is attached to the middle support piece and functions as a ‘stop’ command. It will be hit by the carriage when the plunger is fully inside the syringe barrel, indicating that all fluid has been pumped out, and will turn the motor off as no more motion is necessary.

## Off-the-Shelf and 3D Printed Parts
|Part|Acquirement Method|
|----|----|
|Carriage|3D Printed|
|Rod Support|3D Printed|
|End Support|3D Printed|
|Middle Support|3D Printed|
|Motor Mounting Plate|3D Printed|
|Enclosure|3D Printed|
|Enclosure Lid|3D Printed|
|250 mm Lead Screw (2 mm Lead)|Purchased|
|1/4" x 8 mm Flexible Coupling|Purchased|
|200 mm Linear Rod (8 mm diameter)|Purchased|
|1' 2040 Aluminum Extrusion|Purchased|
|NEMA 17 Stepper Motor|Purchased|
|Quad Output 4 A Power Supply|Purchased|
|Arduino Uno|Purchased|
|A4988 Stepper Driver|Purchased|
|Breadboard|Purchased|
|Jumper Wires|Purchased|
|Potentiometer|Purchased|
|Momentary Push Buttons|Purchased|
|Latching Push Button|Purchased|
|Limit Switch|Purchased|
|RGB Common Cathode LED|Purchased|

## CAD Model
<iframe src="https://vanderbilt643.autodesk360.com/shares/public/SH512d4QTec90decfa6e66b6ac86d6a05dc1?mode=embed" width="640" height="480" allowfullscreen="true" webkitallowfullscreen="true" mozallowfullscreen="true"  frameborder="0"></iframe>

## Arduino Code
The code used for this project can be found [here](kaelonmc.github.io/assets/ArduinoCode/Final_Code_Dummy.ino).

## Operating Instructions
In order to operate the syringe pump properly, these instructions must be followed. Assuming that the proper code has been uploaded to the Arduino, the user can plug the power supply into an outlet. Once connected to the power supply, the user can load the syringe into the  syringe pump. Once the syringe is properly loaded, the user can then push the latching button to activate the motor. The latching button is used to start or pause the motion of the pump, therefore only when the button is pushed can the motor spin. After the latching button is pressed to activate the motor, the user can also push either of the two monetary buttons to change the direction of the motor, clockwise or counterclockwise. This will either push or pull the plunger. The user can also use the potentiometer dial to adjust the flowrate of the pump. Additionally, when the motor is running, the LED will display a green light. When the latching button is pressed to pause the motor, the LED will change from green to yellow. When the latching button is pressed to reactivate the motor, and the pump releases all of the liquid that it was previously holding, the LED will change from green to red. Once the LED is red, the user will know that the syringe pump has finished its task, and the user can reset the pump back into its original position.
