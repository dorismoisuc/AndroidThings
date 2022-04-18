#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C mylcd(0x27, 16, 2);
int red=A1,yellow=A2,green=A3;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  mylcd.begin();
  mylcd.backlight();
  mylcd.clear();

}
 
void loop()
{
 analogWrite(red,0);
 analogWrite(yellow,0);
 analogWrite(green,0);

mylcd.clear();
 analogWrite(yellow,255);
 mylcd.print("Wait");         
 
 mylcd.clear();    
 analogWrite(yellow,0);
 analogWrite(red,255);
 mylcd.print("Stop");
 
 mylcd.clear();
 analogWrite(red,0);
 analogWrite(yellow,255);
 mylcd.print("Wait");
 
 mylcd.clear();
 analogWrite(yellow,0);
 analogWrite(green,255);
 mylcd.print("Go");
}

 }
