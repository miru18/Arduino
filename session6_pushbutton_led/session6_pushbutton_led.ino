#include<LiquidCrystal.h>

 int rs= 12;
 int en= 11;
 int D4= 5;
 int D5= 4;
 int D6= 3;
 int D7= 2;

LiquidCrystal LCD (rs,en,D4,D5,D6,D7);
int PushButton= 8;
int LED1 = 7;

void setup() {
 LCD.begin(16,2);
 pinMode(PushButton,INPUT);
 pinMode(LED1,OUTPUT);
}

void loop() {
 int sensor= digitalRead(PushButton);

 
 LCD.setCursor(5,1);

  LCD.print(sensor);

  if(sensor == 1) 
  {
    digitalWrite(LED1,LOW);
  }

   if(sensor==0) 
   {
    digitalWrite(LED1,HIGH);
  } 
}
