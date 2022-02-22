#include <Arduino.h>
#include "iostream"
#include "Drukknop.h"

using namespace std;

int x;
int y;
int knop;

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
  y = analogRead(14);
  knop = analogRead(13);
  //cout<<x<<" "<<y<<" "<<knop<<endl;
  Serial.print(x);
  Serial.print("  ");
  Serial.print(y);
  Serial.print("  ");
  Serial.print(knop);
  Serial.println();
  delay(1000);
}