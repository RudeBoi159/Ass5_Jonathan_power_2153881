//BLink modified by Jonathan Power for assignment perposes 7/6/2017
#ifndef Blink_h
#define Blink_h

#include "Arduino.h"
//---------------------------------------------------
class Blink
{
  public :
    Blink();
    Blink(int);
    void oneSec();
  private :
    int led;
    
};
//---------------------------------------------------
#endif
