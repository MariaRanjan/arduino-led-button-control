int led = 13;
int button=2;
int button_state;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(button,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state=(digitalRead(button));
  if(button_state==LOW){
    digitalWrite(led,HIGH); 
}
else{
  digitalWrite(led,LOW);
}
}
