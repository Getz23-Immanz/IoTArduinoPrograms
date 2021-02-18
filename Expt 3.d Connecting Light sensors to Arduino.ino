void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  Serial.begin(9600);
}

void loop()
{
  //Code to Read Photoresister
  /*int senval;
  senval=analogRead(A0);
  Serial.println(senval);
  delay(1000);*/
  
  //Code to Read Photodiode
  /*int senval_1;
  senval_1=analogRead(A1);
  Serial.println(senval_1);
  delay(1000);*/
  
  //Code for Ambient light sensor
  int sen;
  sen=analogRead(A2);
  Serial.println(sen);
  delay(1000);
}