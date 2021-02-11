void setup()
{
  Serial.begin(9600);
}

void loop()
{
  long duration,cm;
  pinMode(8,OUTPUT);
  digitalWrite(8,LOW);
  delayMicroseconds(2);
  digitalWrite(8,HIGH);
  delayMicroseconds(5);
  digitalWrite(8,LOW);
  
  pinMode(8,INPUT);
  duration = pulseIn(8,HIGH);
  
  cm = microsecondsToCentimeters(duration);

  // Print the distance
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println(); 
  
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}