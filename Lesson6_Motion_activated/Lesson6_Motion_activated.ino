int ledpin = 8;
int buzzpin =9;
int tillpin = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  pinMode(buzzpin,OUTPUT);
  pinMode(tillpin,INPUT_PULLUP);
  digitalWrite(ledpin,LOW);
  digitalWrite(buzzpin,LOW);


}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(tillpin)==HIGH){
    digitalWrite(ledpin,HIGH);
     digitalWrite(buzzpin,HIGH);
    
  }
}
