int motionSensor = 8;
int redLed = 9;
int greenLed = 10;
int ldrSensor = 7;
int relay1 = 5;
int relay2 = 6;
int t = 3000;

void setup() {
  pinMode(motionSensor,INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2,OUTPUT);

Serial.begin(9600);

}



void loop() {
  int val1 = analogRead(A0); //getting value from LDR sensordigital
  Serial.println(val1);

  int val2 = digitalRead(motionSensor);//getting values from motion sensor
  Serial.println(val2);


if(val1<100){

  digitalWrite(greenLed, HIGH); //if it is sunney green led is on
  

  
}
else{
digitalWrite(redLed,HIGH); //if it is evening red led is on
digitalWrite(relay1, HIGH);//if it is evening LED lamp is turn ON
}

if(val2 == 1){
digitalWrite(relay2, HIGH);
delay(t);
digitalWrite(relay2,LOW);

}

 

}
