int ledpin = 5;
int buttonon= 9;
int buttonoff = 8;



void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(buttonon, INPUT_PULLUP);
  pinMode(buttonoff,INPUT_PULLUP);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(buttonon) == LOW)
  {
    digitalWrite(ledpin, HIGH);
  }
  if (digitalRead(buttonoff) == LOW)
  {
    digitalWrite(ledpin, LOW);
  }
}
