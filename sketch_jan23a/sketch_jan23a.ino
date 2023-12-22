#include<Servo.h> //Lib for servo motor
#include<Wire.h>
#include<LiquidCrystal_I2C.h>
Servo myServo;
LiquidCrystal_I2C lcd(0x27,16,2);

void setup()
{
  pinMode(6,OUTPUT); //LED will receive the data
  pinMode(11,INPUT); //pushbutton
  pinMode(12,INPUT); //slideswitch
  myServo.attach(10);//for attaching Servo motor
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop()
{
  int state;
  state = digitalRead(11); //to read the data from digital pin 11 door lock sensor
  int slide;
  slide = digitalRead(12);// to read from slideswitch
  Serial.println(slide);

  if(slide==1)
  {
   lcd.setCursor(0,0);
   lcd.print("System is armed");
   Serial.println("System is armed");
   if(state==0) //pushbutton pressed
   {
     digitalWrite(6,HIGH);
     lcd.setCursor(0,1);
     lcd.print("Door is open");
     Serial.println("Door is open");
     myServo.write(90);//to rotate servo motor by 90
     delay(1000);
   }
   else  //release pushbutton
   {
     digitalWrite(6,LOW);
     lcd.setCursor(0,1);
     lcd.print("Door is closed");
     Serial.println("Door is closed");
     myServo.write(0);//to rotate servo motor to 0 degrees
     delay(1000);
   }
  }
  else
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("System unarmed");
    Serial.println("System is unarmed");
  }

}
