void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pot;
  pot = analogRead(A0);
  int newpot;
  newpot = map(pot,2,1023,0,255); //(pot,old range,new range)
  analogWrite(11,newpot);
}
