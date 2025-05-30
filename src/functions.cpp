#include "functions.h"
#include <Arduino.h>

void carRed(int carR, int carY, int carG){
    digitalWrite(carG, LOW);
    digitalWrite(carY, HIGH);
    delay(3000);
    digitalWrite(carY, LOW);
    digitalWrite(carR, HIGH);
}

void peopleGreen(int peopleR, int peopleG){
    digitalWrite(peopleR, LOW);
    digitalWrite(peopleG, HIGH);
}

void carGreen(int carR, int carG){
    digitalWrite(carG, HIGH);
    digitalWrite(carR, LOW);
}

void peopleRed(int peopleG, int peopleR){
    digitalWrite(peopleG, LOW);
    digitalWrite(peopleR, HIGH);
}

void sound(int pB, int Do){
    for(int i = 0; i < 15; i++){
        tone(pB, Do);
        delay(500);
        noTone(pB);
        delay(500);
    }
}

void acctionPulse(int minTime, int LEDcarR, int LEDcarY, int LEDcarG, int LEDpeopleR, int LEDpeopleG, int pinBuzeer, int Do){
      carRed(LEDcarR, LEDcarY, LEDcarG);
      peopleGreen(LEDpeopleR, LEDpeopleG);
      sound(pinBuzeer, Do);
      delay(15000);
      carGreen(LEDcarR, LEDcarG);
      peopleRed(LEDpeopleG, LEDpeopleR);
      minTime = 0; // Reset the timer after the pedestrian crossing
}