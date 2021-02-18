void setup()
{
  pinMode(7, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int read;
  read=digitalRead(7);
  Serial.println(read);
  delay(1000);
}