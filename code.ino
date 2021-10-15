void setup() {
  pinMode(13,OUTPUT); //output pin for relay
  pinMode(12,OUTPUT); //output pin for indicator LED
  pinMode(A0,INPUT); //input pin to read soil moisture sensor data
  Serial.begin(115200); //baud rate for intel galileo
}

void loop() {
  int relay=12;
  int led=13;
  int sensorValue;
  sensorValue = analogRead(A0);
  delay(2000);
  Serial.println(sensorValue);
  if(sensorValue>=600){
  digitalWrite(relay,HIGH);
  digitalWrite(led,HIGH);
  }
  else{
  digitalWrite(relay,LOW);
  digitalWrite(led,LOW);
  }
  }
