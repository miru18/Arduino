void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value;
  value = analogRead(A1);
  int tempC;
  tempC = value/2.046;

  Serial.println("Temp in C is ");
  Serial.println(tempC);
  delay(2686);
  
}
