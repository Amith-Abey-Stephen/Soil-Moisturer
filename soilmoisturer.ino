int green=2;
int sensorPin=A0;

void setup() {  
  Serial.begin(9600);
  pinMode(green,OUTPUT);
}

void loop() {
 
  int moisture = analogRead(sensorPin);
  Serial.print("Analog output: ");
  Serial.println(moisture);
  if (moisture < 400) {
    Serial.println("Status: Soil is wet");
    digitalWrite(green,HIGH);
    delay(1000);
  } else {
    digitalWrite(green,LOW);
  }
  Serial.println();
  delay(1000);
}