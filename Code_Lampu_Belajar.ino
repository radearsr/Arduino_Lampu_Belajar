/* 
 * Code BY RADEARSR => http://rsrprojek.epizy.com
 * PIN I/O SENSOR TTP23 ====> PIN 6 ARDUINO 
 * PIN IN RELAY         ====> PIN 7 ARDUINO
*/

int sensorSentuh = 6;
int relay = 7;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(relay, OUTPUT);
}

void loop() {
  int sensorValue = digitalRead(sensorSentuh);
  Serial.println(sensorValue);
  
  //Jika Sensor Disentuh Maka Hidupkan Relay  
  if(sensorValue == HIGH){
    digitalWrite(relay, LOW);
  }else{
    digitalWrite(relay, HIGH);
  }
  
}
