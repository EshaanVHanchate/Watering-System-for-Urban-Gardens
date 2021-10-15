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
  Serial.println(sensorValue); //To see values in Serial Monitor
  if(sensorValue>=600){
  digitalWrite(relay,HIGH); //turns relay ON and watering starts
  digitalWrite(led,HIGH); //LED turns ON to indicate
  }
  else{
  digitalWrite(relay,LOW); //turns relay OFF
  digitalWrite(led,LOW); //LED turns OFF
  }
  }
