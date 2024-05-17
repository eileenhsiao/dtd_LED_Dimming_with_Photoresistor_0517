
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(A0);
  if(sensorValue >= 500){
    sensorValue = 500;
  }
  else if(sensorValue <= 100){
    sensorValue = 100;
  }
  Serial.println(sensorValue);
  int dimming = map(sensorValue,100,500,0,255);
   analogWrite(9,dimming);
   delay(1);
}
