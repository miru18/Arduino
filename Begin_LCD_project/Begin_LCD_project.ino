#include<LiquidCrystal.h>
LiquidCrystal LCD(12,11,2,3,4,5);


void setup() {
  LCD.begin(16,2);

  for(int i=1 ; i<=10; i=i+1)
  {
    LCD.setCursor(0,0);
    LCD.print(i);
    delay(1000);
  }

}

void loop() {


}
