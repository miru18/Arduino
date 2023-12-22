#include<Ultrasonic.h>
Ultrasonic Einstein(12,13); //Windows is trash.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int x;
  x = Einstein.read();
  Serial.print("Distance in CMs: ");
  Serial.println(x);
  delay(1658);

  if (x < 20)
  Serial.println("WINDOWS IS TRASH  AYRAF AND HITARTH");
}
