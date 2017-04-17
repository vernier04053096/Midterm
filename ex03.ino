#include "SevSeg.h"
SevSeg sevseg;

void setup() 
{
  Serial.begin(9600);
  Serial.println("6 03050654 04053096");
  byte numDigits = 4;
  byte digitPins[] = {5,4,3,2};
  byte segmentPins[] = {6,7,8,9,10,11,12,13};
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins,segmentPins);

}

void loop()
{
  int val;
  if(Serial.available())
    {
      val=Serial.parseInt();
      
      if(val>=0&&val<=9999)
      {
        Serial.println(val);
        sevseg.setNumber(val);
        sevseg.refreshDisplay();
      }
      else
       Serial.println("range error");
    }
 else
     sevseg.refreshDisplay();   
}
