//
int led = 13;


void setup() {
  // pinmode needs to know two things which oin are we setting mode on and what is that mode
  pinMode(led, OUTPUT);
  

}

void loop() {
  // sends power to led and turns the light on
  digitalWrite(led, HIGH);
  // the amount of ms that wewant to be delayds
  delay(1000);
  // the light turns off
  digitalWrite(led, LOW);
  
  delay(100000);

}
