int celcius;
int faren;
int cel;

void setup()
{
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  celcius = analogRead(A0);
  cel = map(((celcius-20)*3.04),0,1023,-40,125);
  faren = ((cel*9)/5)+32;
  Serial.print(cel);
  Serial.print("C,");
  Serial.print(faren);
  Serial.print("F");
  Serial.print("\n");
  delay(1000);
}