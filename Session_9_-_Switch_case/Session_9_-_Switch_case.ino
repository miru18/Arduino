void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);  //baud rate
}

void loop() {
  // put your main code here, to run repeatedly:
  char in;
  if(Serial.available())
  {
    in = Serial.read();
    switch (in)
    {
      case 'r':   //to turn ON red LED
        digitalWrite(10,HIGH);
        delay(2000);
        Serial.println("You turned ON RED LED");
        digitalWrite(10,LOW);
        delay(2000);
        break;

      case 'b':   //to turn ON red LED
        digitalWrite(8,HIGH);
        delay(2000);
        Serial.println("You turned ON blue LED");
        digitalWrite(8,LOW);
        delay(2000);
        break;

      case 'g':   //to turn ON red LED
        digitalWrite(9,HIGH);
        delay(2000);
        Serial.println("You turned ON green LED");
        digitalWrite(9,LOW);
        delay(2000);
        break;
    }
  }
}
