//initialising the pins

int green=2;// pin for a led
int sensorPin=A0;//pin on the soil moisture sensor

void setup() {  
  Serial.begin(9600);
  pinMode(green,OUTPUT);
}

void loop() {
 
  int moisture = analogRead(sensorPin);//reading the values
  Serial.print("Analog output: ");//printing in monitor
  Serial.println(moisture);//printing in monitor
  if (moisture < 400) {//condition
    Serial.println("Status: Soil is wet");
    digitalWrite(green,HIGH);
    delay(1000);
  } else {
    digitalWrite(green,LOW);
  }
  Serial.println();
  delay(1000);
}
