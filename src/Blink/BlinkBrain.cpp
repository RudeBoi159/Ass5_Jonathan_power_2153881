//BLink modified by Jonathan Power for assignment perposes 7/6/2017



#include "Arduino.h"
#include "Blink.h"
//------------------------------------------------------------------
Blink::Blink(){}
Blink::Blink(int l){
led = l;
}
//------------------------------------------------------------------
void Blink::oneSec(){
  
  digitalWrite(led, HIGH);
  delay(1000);              
  digitalWrite(led, LOW);    
  delay(1000);               

}
