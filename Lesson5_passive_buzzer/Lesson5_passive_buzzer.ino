int buzzpin = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin,OUTPUT);
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzpin,HIGH);
  delay(50);
  digitalWrite(buzzpin,LOW);
  delay(999);
  

}
