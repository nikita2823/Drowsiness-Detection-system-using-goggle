#define SENSE A0 
int b=3;
void setup()
{
pinMode(SENSE, INPUT);
pinMode(2, OUTPUT);


pinMode(b, OUTPUT);
}
void loop()
{
if(digitalRead(SENSE))
{
 digitalWrite(b, LOW);
 pinMode(2, LOW);
}
else
{
  delay (5000);
  if(digitalRead(SENSE))
  {
 digitalWrite(b, LOW);
 pinMode(2, LOW);
}
  else
  digitalWrite(b, HIGH);  
   pinMode(2, HIGH);
  }
}
