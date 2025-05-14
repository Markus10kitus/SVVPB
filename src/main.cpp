#include <Arduino.h>
#include "functions.h"
int pB = 6;
int LEDcarG = 7;
int LEDcarY = 8;
int LEDcarR = 9;
int LEDpeopleG = 10;
int LEDpeopleR = 11;
int puls = 12;
int Do = 261;
int d = 15000;
// void sC(int gL, int yH, int rH){
//   digitalWrite(gL, LOW);
//   digitalWrite(yH, HIGH);
//   delay(3000);
//   digitalWrite(yH, LOW);
//   digitalWrite(rH, HIGH);
//   delay(15000);
//   digitalWrite(gL, HIGH);
//   digitalWrite(rH, LOW);
// }
// void sP(int gH, int rL){
//   digitalWrite(gH, HIGH);
//   digitalWrite(rL, LOW);
//   tone(pB, Do, d);
//   delay(15000);
//   digitalWrite(gH, LOW);
//   digitalWrite(rL, HIGH);
// }
void setup(){
  pinMode(LEDcarG, OUTPUT);
  pinMode(LEDcarR, OUTPUT);
  pinMode(LEDcarY, OUTPUT);
  pinMode(LEDpeopleG, OUTPUT);
  pinMode(LEDpeopleR, OUTPUT);
  pinMode(puls, INPUT_PULLUP);
}
// void loop(){
//     int button = digitalRead(puls);
//     if (button == LOW){
//        sC(LEDcarG, LEDcarY, LEDcarR);
//        //sP(LED_g, LED_r);
//     } else {
//       digitalWrite(LEDcarG, HIGH);
//       //digitalWrite(LED_r, HIGH);
//     }
// } //Fer un altre if igual x mirar de fer-ho en dos parts en compte d'una.

// void pulsarBoto(int carGreen, int carYellow, int carRed, int peopleGreen, int peopleRed){
//   digitalWrite(carGreen, LOW);
// }