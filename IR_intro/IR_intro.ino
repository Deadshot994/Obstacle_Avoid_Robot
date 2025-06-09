int lmt1=11;
int lmt2=6;
int rmt1=3;
int rmt2=5;
int sensor;
void setup() 
{
  pinMode(lmt1,OUTPUT);
  pinMode(lmt2,OUTPUT);
  pinMode(rmt1,OUTPUT);
  pinMode(rmt2,OUTPUT);
  pinMode(8,INPUT);
}
void loop()
{
  sensor=digitalRead(8);
  if(sensor==HIGH)
  {
    stp();
  }
  else
  {
    forward();
  }
}

void forward()
{
  analogWrite(lmt1,0); //forward
  analogWrite(lmt2,150);
  analogWrite(rmt1,0);
  analogWrite(rmt2,150);
}

 void reverse()
 { 
  analogWrite(lmt1,150); //reverse
  analogWrite(lmt2,0);
  analogWrite(rmt1,150);
  analogWrite(rmt2,0);
 }

  void left()
  {
  analogWrite(lmt1,0); //left
  analogWrite(lmt2,150);
  analogWrite(rmt1,150);
  analogWrite(rmt2,0);
  }

  void right()
  {
  analogWrite(lmt1,150); //right
  analogWrite(lmt2,0);
  analogWrite(rmt1,0);
  analogWrite(rmt2,150); 
  } 
  void stp()
  {
  analogWrite(lmt1,0); 
  analogWrite(lmt2,0);
  analogWrite(rmt1,0);
  analogWrite(rmt2,0);
  }
  void stpleft()
  {
  analogWrite(lmt1,0); 
  analogWrite(lmt2,0);
  analogWrite(rmt1,0);
  analogWrite(rmt2,150);
  }
  void stpright()
  {
  analogWrite(lmt1,0); 
  analogWrite(lmt2,150);
  analogWrite(rmt1,0);
  analogWrite(rmt2,0);
  }


