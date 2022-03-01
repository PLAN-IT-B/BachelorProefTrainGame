#include "Drukknop.h"
#include <math.h>

int Drukknop::bepaalZone(int x, int y){
    x=-2000;
    y=-2000;
    double hoek= atan(y/x);
    int zone;
    if(0<=hoek<30) zone=10;
    if(30<=hoek<60) zone=11;
    if(60<=hoek<90) zone=12;
    if(90<=hoek<120) zone=1;
    if(120<=hoek<150) zone=2;
    if(150<=hoek<180) zone=3;
    if(180<=hoek<210) zone=4;
    if(210<=hoek<240) zone=5;
    if(240<=hoek<270) zone=6;
    if(270<=hoek<300) zone=7;
    if(300<=hoek<330) zone=8;
    if(330<=hoek<=359) zone=9;   
    if(deadZone(x,y)) zone = 0;
    else zone = -1;
    return zone;

}

bool Drukknop::deadZone(int x, int y){
    double afst= sqrt(x*x+y*y);
    return afst>afstand_deadzone;
}