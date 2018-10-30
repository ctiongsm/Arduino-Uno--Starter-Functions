const int switchPin = 2;
int switchState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(switchPin, INPUT);
  // Serial.println("CLEARDATA");
  // Serial.println("LABEL, Time, Start Time, Voltage"); //for data excel add on
  // Serial.println("RESETTIMER");

}

void loop() {

  int switchState = digitalRead(switchPin);
  
  int voltval = analogRead(A0);
  float voltage = (voltval/1023) * 5.0;

  if (switchState == HIGH) { 
    // Serial.print("DATA,TIME,TIMER "); //for data excel add on
    Serial.print("Current voltage reading: ");
    Serial.println(voltage);
    delay(200);
  }
}
