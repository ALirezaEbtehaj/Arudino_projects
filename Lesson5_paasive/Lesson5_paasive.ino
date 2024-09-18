int buzzpin = 9;


void setup() {
  // put your setup code here, to run once:
   pinMode(buzzpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly
  for(int i=0; i<250; i++){
    digitalWrite(buzzpin,HIGH);
    delay(2);
    digitalWrite(buzzpin,LOW);
    delay(2);
    
  }
  for(int i=0; i<125; i++){
    digitalWrite(buzzpin,HIGH);
    delay(8);
    digitalWrite(buzzpin,LOW);
    delay(8);
    
  }
  

}
