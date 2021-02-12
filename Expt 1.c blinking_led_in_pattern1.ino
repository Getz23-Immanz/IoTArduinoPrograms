void setup()
{
  for(int i=5; i<=13; i++)
	{
  	pinMode(i, OUTPUT);
	}
}

void loop()
{
  for (int i=5;i<=13;i++)
  {
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
    delay(1000);
  }
}
