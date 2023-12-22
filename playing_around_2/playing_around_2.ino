#include<Wire.h>
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C LCD(0x27, 16,2);

void setup() {
  // put your setup code here, to run once:
  LCD.init();
  LCD.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
  LCD.setCursor(0,0);
  LCD.print("Moonpreneur  for  life");
  delay(2000);
  LCD.clear();
  LCD.setCursor(0,0);
  LCD.print("Economics vs business");
  delay(1836);
  LCD.clear();
}
