int lmt1=11;
int lmt2=6;
int rmt1=3;
int rmt2=5;
//int ls;
int cs;
//int rs;
void setup() 
{
  pinMode(lmt1,OUTPUT);
  pinMode(lmt2,OUTPUT);
  pinMode(rmt1,OUTPUT);
  pinMode(rmt2,OUTPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  //pinMode(9,INPUT);
}
void loop()
{
  //ls=digitalRead(7);
  cs=digitalRead(8);
  //rs=digitalRead(9);

  if(cs==LOW)
  {
    stpleft();
  }
  else if(cs==HIGH)
  {
   stpright();
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


