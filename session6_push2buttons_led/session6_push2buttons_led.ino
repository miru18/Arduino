

int PushButton1 = 6;
int PushButton2 = 7;
int LED1 = 8;

void setup() {
 pinMode(PushButton1,INPUT);
 pinMode(PushButton2,INPUT);
 pinMode(LED1,OUTPUT);
}

void loop() {
 int PBone= digitalRead(PushButton1);
 int PBtwo= digitalRead(PushButton2);
 


  if (PBone == 1) {
    digitalWrite(LED1,HIGH);
  }

  if (PBtwo == 1) {
    digitalWrite(LED1,LOW);
  }
  
  
}
