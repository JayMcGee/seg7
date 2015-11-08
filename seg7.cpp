/*
  seg7.h - Library for controlling 7 segments display
  using an 4051 8-channel multiplexer
  Created by Jean-Pascal MCGee on 7, November, 2015.
  Released into the public domain.
*/

#include "Arduino.h"
#include "seg7.h"

//Public
seg7::seg7(int pinA,int pinB, int pinC)
{
	_pinA = pinA;
	_pinB = pinB;
	_pinC = pinC;
	pinMode(_pinA,OUTPUT);
	pinMode(_pinB,OUTPUT);
	pinMode(_pinC,OUTPUT);
}
void seg7::displayInt(int numberToDisplay)
{
	switch (numberToDisplay)
    {
      	case 0:
         segA();
         delay(_onTime);
         segB();
         delay(_onTime);
         segC();
         delay(_onTime);
         segD();
         delay(_onTime);
         segE();
         delay(_onTime);
         segF();
         delay(_onTime);
         break;
       	case 1:
        	segB();
        	delay(_onTime);
        	segC();
        	delay(_onTime);
        	break;
       	case 2:
         segA();
         delay(_onTime);
         segB();
         delay(_onTime);
         segG();
         delay(_onTime);
         segD();
         delay(_onTime);
         segE();
         delay(_onTime);
         break;
       	case 3:
         segA();
         delay(_onTime);
         segB();
         delay(_onTime);
         segC();
         delay(_onTime);
         segG();
         delay(_onTime);
         segD();
         delay(_onTime);
         break;
       	case 4:
         segF();
         delay(_onTime);
         segB();
         delay(_onTime);
         segC();
         delay(_onTime);
         segG();
         delay(_onTime);
         break;
       	case 5:
         segA();
         delay(_onTime);
         segF();
         delay(_onTime);
         segG();
         delay(_onTime);
         segC();
         delay(_onTime);
         segD();
         delay(_onTime);
         break;
       	case 6:
         segF();
         delay(_onTime);
         segE();
         delay(_onTime);
         segD();
         delay(_onTime);
         segC();
         delay(_onTime);
         break;
       	case 7:
         segA();
         delay(_onTime);
         segB();
         delay(_onTime);
         segC();
         delay(_onTime);
         break;
     		case 8:
         segA();
         delay(_onTime);
         segB();
         delay(_onTime);
         segC();
         delay(_onTime);
         segD();
         delay(_onTime);
         segE();
         delay(_onTime);
         segF();
         delay(_onTime);
         segG();
         delay(_onTime);
         break;
      	case 9:
        	segA();
         	delay(_onTime);
         	segB();
         	delay(_onTime);
         	segC();
         	delay(_onTime);
         	segG();
         	delay(_onTime);
         	segF();
         	delay(_onTime);
         	break;
     	default:
          	digitalWrite(_pinA,HIGH);
          	digitalWrite(_pinB,HIGH);
          	digitalWrite(_pinC,HIGH);
          	delay(_onTime);
         	break;
    }
}
void seg7::displayChar(char charToDisplay)
{
	//Not implemented yet
}

//Private
void seg7::segA()
{
   digitalWrite(_pinA,LOW);
   digitalWrite(_pinB,HIGH);
   digitalWrite(_pinC,LOW);
}
void seg7::segB()
{
   digitalWrite(_pinA,HIGH);
   digitalWrite(_pinB,HIGH);
   digitalWrite(_pinC,LOW);
}
void seg7::segC()
{
   digitalWrite(_pinA,LOW);
   digitalWrite(_pinB,LOW);
   digitalWrite(_pinC,HIGH);
}
void seg7::segD()
{
   digitalWrite(_pinA,HIGH);
   digitalWrite(_pinB,LOW);
   digitalWrite(_pinC,HIGH);
}
void seg7::segE()
{
   digitalWrite(_pinA,LOW);
   digitalWrite(_pinB,HIGH);
   digitalWrite(_pinC,HIGH);
}
void seg7::segF()
{
   digitalWrite(_pinA,HIGH);
   digitalWrite(_pinB,LOW);
   digitalWrite(_pinC,LOW);
}
void seg7::segG()
{
   digitalWrite(_pinA,LOW);
   digitalWrite(_pinB,LOW);
   digitalWrite(_pinC,LOW);
}
