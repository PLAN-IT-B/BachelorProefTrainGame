#include <Arduino.h>
#include "iostream"
#include "Drukknop.h"
#include <math.h>
#define M_PI		3.14159265358979323846

using namespace std;

int x;
int y;
int q,r;
int knop;
float hoek;
#include <math.h>

<<<<<<< HEAD

void setup() { 
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(14,INPUT);
  
=======
Drukknop *d1;
int zone;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  pinMode(14,INPUT);
>>>>>>> 98fb19ce7457df0af03b6d1cd34979562a205bd2
}

void loop() {
  // put your main code here, to run repeatedly:
  
<<<<<<< HEAD
  delay(1000);
  x = analogRead(14);
  y = analogRead(12);
  knop = analogRead(13);
=======
  x = analogRead(12);
  y = analogRead(13);
  knop = analogRead(14);
  zone = d1->bepaalZone(x,y);

>>>>>>> 98fb19ce7457df0af03b6d1cd34979562a205bd2
  Serial.print(x);
  Serial.print("  ");
  Serial.print(y);
  Serial.print("  ");
  Serial.print(knop);
<<<<<<< HEAD
  Serial.print(" ");
  
  
  
  
  Serial.println();
  

}


/* ----------BROLCODE-------
 int q=x-2000;
  int r=y-2000;
  double som=(q*q)+(r*r);
  double afst= sqrt(som);
  Serial.print(afst);
  if( afst>1900){
    Serial.print("Niet in DeadzoneDeadzone");
  }
  else Serial.print("DEADZONE");


  q=x-2047.5;
  r=y-2047.5;
  hoek=atan(r/q);
  Serial.print(hoek);

  
  if(x<300||x>3795||y<300||y>3795){
    Serial.print("OK ");
  }
  else{ Serial.print("DEAD");}

if(x>2730 && 1365<=y<=2730) {Serial.print("Zone 1");}
if(x>2730 && y>2730) {Serial.print("Zone 2");}
if(x>2730 && y<1365) {Serial.print("Zone 8");}


if(1365<=x<=2730 && y>2730) {Serial.print("Zone 3");}
if(1365<=x<=2730 && 1365<=y<=2730) {Serial.print("DEADZONE");}
if(1365<=x<=2730 && y<1365) {Serial.print("Zone 7");}

if(1365<x && y>2730) {Serial.print("Zone 4");}
if(1365<x && 1365<y<2730) {Serial.print("Zone 5");}
if(1365<x && y<1365) {Serial.print("Zone 6");}
=======
  Serial.print("  ");
  Serial.print(zone);
  Serial.println("  ");
  delay(1000);
   
>>>>>>> 98fb19ce7457df0af03b6d1cd34979562a205bd2

  */