#define echoPin 11
#define trigPin 6
#define Greenled 12
#define Relay 5

long int duration;
long distance;

void setup() {
  // put your setup code here, to run once
pinMode(echoPin, INPUT); //set echoPin as inputs
pinMode(trigPin,OUTPUT);
pinMode(Relay,OUTPUT);
pinMode(Greenled,OUTPUT);
Serial.begin(9600);

}

void receiveSignal(){ //function for receiving
  duration=pulseIn(echoPin, HIGH);
   
}
void loop(){
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(2);
  digitalWrite(trigPin, LOW);
  receiveSignal();
  distance= duration*0.0332/2;
  Serial.println(distance);
  if (distance >=2 && distance <=20){
    digitalWrite (Greenled, HIGH);
    digitalWrite(Relay, HIGH);
    delay(1000);
  }
  else{
    digitalWrite(Greenled, LOW);
    digitalWrite(Relay, LOW);
  }
}