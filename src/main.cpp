#include <Arduino.h>
#include "functions.h"

// This variables are used to control the traffic lights and buzzer
int pinBuzeer = 6;
int LEDcarG = 7;
int LEDcarY = 8;
int LEDcarR = 9;
int LEDpeopleG = 10;
int LEDpeopleR = 11;
int pulseButton = 12;

// This variable is used to control the sound frequency
int Do = 261;

// This variables are used to control the minimum time for the pedestrian crossing
int minTime = 0;
unsigned long previousTime = 0;
const unsigned long interval = 1000; // 1 second

void setup(){
  pinMode(LEDcarG, OUTPUT);
  pinMode(LEDcarR, OUTPUT);
  pinMode(LEDcarY, OUTPUT);
  pinMode(LEDpeopleG, OUTPUT);
  pinMode(LEDpeopleR, OUTPUT);
  pinMode(pulseButton, INPUT_PULLUP);
  digitalWrite(LEDcarG, HIGH);
  digitalWrite(LEDpeopleR, HIGH);
}

void loop(){
    unsigned long actualTime = millis();
    if (actualTime - previousTime >= interval){
        previousTime = actualTime;
        minTime++;
    }
    int button = digitalRead(pulseButton);
    if (button == LOW && minTime >= 30){ //Low = Pressed
      acctionPulse(minTime, LEDcarR, LEDcarY, LEDcarG, LEDpeopleR, LEDpeopleG, pinBuzeer, Do);
    } else {
      delay(30000 - minTime * 1000);// Wait for the remaining time
      acctionPulse(minTime, LEDcarR, LEDcarY, LEDcarG, LEDpeopleR, LEDpeopleG, pinBuzeer, Do);
    } 
}