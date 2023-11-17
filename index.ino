int red = 12;
int yellow=8;
int green=4;
void setup() {
  // put your setup code here, to run once:
pinMode(red,OUTPUT);
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
delay(3000);
digitalWrite(red,LOW);
delay(3000);

digitalWrite(yellow,HIGH);
delay(2000);
digitalWrite(yellow,LOW);
delay(2000);

digitalWrite(green,HIGH);
delay(2000);
digitalWrite(green,LOW);
delay(2000);

for(int i=0; i<3; i++){
  digitalWrite(green,HIGH);
  delay(500);
  digitalWrite(green,LOW);
  delay(500);
}

}