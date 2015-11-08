/*
  seg7.h - Library for controlling 7 segments display
  using an 4051 8-channel multiplexer
  Created by Jean-Pascal MCGee on 7, November, 2015.
  Released into the public domain.
*/
#ifndef SEG7_h
#define SEG7_h

#include "Arduino.h"

class seg7
{
  public:
    seg7(int pinA,int pinB,int pinC);
    void displayInt(int numberToDisplay);
    void displayChar(char charToDisplay);
  private:
    int _pinA;
    int _pinB;
    int _pinC;
    const int _onTime = 1;
    void segA();
    void segB();
    void segC();
    void segD();
    void segE();
    void segF();
    void segG();
};

#endif
