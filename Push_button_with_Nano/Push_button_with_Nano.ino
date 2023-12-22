// C++ code
//
void setup()
{
  pinMode(6,OUTPUT);
  pinMode(11,INPUT);
  Serial.begin(9600);
}

void loop()
{
 int Einstein;
 Einstein = digitalRead(11);
 Serial.println(Einstein);
  
  if(Einstein==0)
   digitalWrite(6,HIGH);
  else
    digitalWrite(6,LOW);
  
}
