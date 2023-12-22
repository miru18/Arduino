#include<LiquidCrystal.h> //add the library for LCD
LiquidCrystal myLCD(12,11,2,3,4,5); // (RS,EN,D4,D5,D6,D7)


void setup() {
  // put your setup code here, to run once:
  myLCD.begin(16,2);//columns,rows
}

void loop() {
  // put your main code here, to run repeatedly:
  myLCD.setCursor(0,0);//set cursor on 1st row and 1st column
  myLCD.print("Code by Einstein");
  myLCD.setCursor(0,1);//set cursor on 2nd row and 1st column
  myLCD.print("20th Oct 2021");
}
