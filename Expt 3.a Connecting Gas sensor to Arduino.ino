void setup()
{
 Serial.begin(9600);
}

void loop()
{
  float sensorval;
  sensorval = analogRead(A0);
  Serial.print(sensorval);
  Serial.println();
}