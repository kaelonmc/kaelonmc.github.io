#include <AccelStepper.h>

AccelStepper stepper(AccelStepper::DRIVER, 5, 4);

//float syringeInnerDiameter = 14.5;  //in mm, must be changed depending on syringe size
float syringeInnerDiameter = 19; //for large syringe

int potValue = 0;
float flowrate = 0;
int motorMaxSpeed = 800;  //Maximum 2 revolutions per second (MS1 enabled) which correpsponds to 4 mm of linear motion
int motorSetSpeed = 0;  //Set by potentiometer
float motorSetSpeedFloat = 0; //Used for accurate flowrate calculations

int pot = A0;
int clockwiseButton = 7;
int counterclockwiseButton = 8;
int redLED = 9;
int greenLED = 10;
int blueLED = 11;
int latchingButton = 12;
int limitSwitch = 13;

void setup() {
  // put your setup code here, to run once:
  stepper.setMaxSpeed(motorMaxSpeed);     

  Serial.begin(230400);

  pinMode(clockwiseButton, INPUT_PULLUP); //LOW when pushed, HIGH when not pushed
  pinMode(counterclockwiseButton, INPUT_PULLUP);
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(latchingButton, INPUT_PULLUP);
  pinMode(limitSwitch, INPUT_PULLUP);
}

void loop() {

  while (digitalRead(clockwiseButton) == LOW) { //If the CW button is pushed, motor rotates at max speed clockwise
    analogWrite(redLED, 0);
    analogWrite(greenLED, 255); //Green means motor is turning
    analogWrite(blueLED, 0);
    stepper.setSpeed(motorMaxSpeed);
    stepper.runSpeed();
  }

  while (digitalRead(counterclockwiseButton) == LOW) {  //If the CCW button is pushes, motor rotates at max speed counterclockwise
    analogWrite(redLED, 0);
    analogWrite(greenLED, 255); //Green means motor is turning
    analogWrite(blueLED, 0);
    stepper.setSpeed(-motorMaxSpeed);
    stepper.runSpeed();
  }

  while (digitalRead(limitSwitch) == LOW) {
    analogWrite(redLED, 255); //Red indicates motor halting
    analogWrite(greenLED, 0);
    analogWrite(blueLED, 0);
    stepper.stop(); //Motor stops when switch is triggered
      if (digitalRead(counterclockwiseButton) == LOW && digitalRead(limitSwitch) == LOW) {  //If both CCW button and limit switch are pushed, motor spins CCW to reset position
        analogWrite(redLED, 0);
        analogWrite(greenLED, 255);
        analogWrite(blueLED, 0);
        stepper.setSpeed(-motorMaxSpeed);
        stepper.runSpeed();
    }
  }

  if (digitalRead(latchingButton) == LOW) { //Syringe pumping occurs when the latching (play/pause) button is engaged
    analogWrite(redLED, 0);
    analogWrite(greenLED, 255);
    analogWrite(blueLED, 0);
    potValue = analogRead(pot);
    motorSetSpeed = map(potValue, 0, 923, 0, motorMaxSpeed);  //Pot value is scaled to motor speed. 923 value selected instead of 1023 since values above a certain treshold weren't accurately read
    stepper.setSpeed(motorSetSpeed);
    stepper.runSpeed(); //Motor runs at speed set by pot
    motorSetSpeedFloat = float(motorSetSpeed);  //Float conversion needed for accurate math
    flowrate = (((pow((syringeInnerDiameter/2), 2) * 3.14159) * (motorSetSpeedFloat/400*2))/1000);  //Cross-sectional area times linear velocity
    Serial.println(flowrate); //Requested in assignment, in mL/s

  }
  else {  //Motor stops and LED shines yellow when pumping action is paused
    analogWrite(redLED, 255);
    analogWrite(greenLED, 80);
    analogWrite(blueLED, 0);
  }
}
