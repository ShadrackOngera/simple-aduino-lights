int led = 13;
int green=12;
int led2=11;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
pinMode(green,OUTPUT);
pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(10);
digitalWrite(led,LOW);
delay(10);
digitalWrite(led2,HIGH);
delay(10);
digitalWrite(led2,LOW);
delay(10);

digitalWrite(green,HIGH);
delay(10);

digitalWrite(green,LOW);
delay(10);

}