const int switchPin1=4,switchPin2=5;
const int MotorPin1=6,MotorPin2=7;
int switchstate1 =0 ,switchstate2 =0 ;
void setup()
{
  pinMode(MotorPin1,OUTPUT);
  pinMode(MotorPin2,OUTPUT);
  pinMode(switchPin1,INPUT);
  pinMode(switchPin2,INPUT);
}
void loop(){
  switchstate1 = digitalRead(switchPin1);
  switchstate2 = digitalRead(switchPin2);
  if (switchstate1 == HIGH)
  
{
  digitalWrite(MotorPin1,HIGH);
  digitalWrite(MotorPin2,LOW);
  
}
else if(switchstate1 == HIGH)

{
  digitalWrite(MotorPin1,LOW);
  digitalWrite(MotorPin2,HIGH);
}
else
{
  digitalWrite(MotorPin1,LOW);
  digitalWrite(MotorPin2,LOW);
}
}
