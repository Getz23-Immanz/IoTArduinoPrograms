void setup()
{
  Serial.begin(9600);
  pinMode(7,INPUT);
}

void loop()
{
  int senst=0;
  senst = digitalRead(7);
  if (senst ==HIGH) {
    Serial.println("Object detected");
  }
  else {
    Serial.println("Object not detected");
  }
  delay(20);   
  
}