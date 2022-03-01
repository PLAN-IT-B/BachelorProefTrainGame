#include <Arduino.h>
#include "iostream"
#include "Drukknop.h"

using namespace std;

int x;
int y;
int knop;

Drukknop *d1;
int zone;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(14,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  x = analogRead(12);
  y = analogRead(13);
  knop = analogRead(14);
  zone = d1->bepaalZone(x,y);

  Serial.print(x);
  Serial.print("  ");
  Serial.print(y);
  Serial.print("  ");
  Serial.print(knop);
  Serial.print("  ");
  Serial.print(zone);
  Serial.println("  ");
  delay(1000);
   

}