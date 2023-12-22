void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a;
  a = 5*9;
  Serial.println(a);
  delay(2000);
}
