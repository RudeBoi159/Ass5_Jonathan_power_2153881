//BLink modified by Jonathan Power for assignment perposes 7/6/2017
#include "Blink.h"

int led = 13;
Blink blink(led);

void setup() {                
  pinMode(led, OUTPUT);     
}

void loop() {
  blink.oneSec();
}
