int red =12;
int green= 13;
int yellow=8;

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  delay(4000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  delay(3000); // Wait for 1000 millisecond(s)
  
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  
}