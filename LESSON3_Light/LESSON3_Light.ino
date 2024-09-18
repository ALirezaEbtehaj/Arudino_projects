#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
  pinMode(RED,OUTPUT);
  pinMode(GREEN,OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN,LOW);
  digitalWrite(BLUE, LOW);
}
int redvalue;
int greenvalue;
int bluevalue;

void loop()
{
 #define delayTime 10
 redvalue=255;
 greenvalue=0;
 bluevalue = 0;

 for(int i = 0; i <255 ; i+=1)
 {
  redvalue -= 1;
  greenvalue += 1;

  analogWrite(RED, redvalue);
  analogWrite(GREEN, greenvalue);
  delay(delayTime);
 }
 redvalue=0;
 greenvalue=225;
 bluevalue = 0;
 for(int i = 0; i <255 ; i+=1)
 {
  greenvalue -= 1;
  bluevalue += 1;

  analogWrite(GREEN, greenvalue);
  analogWrite(BLUE, bluevalue);
  delay(delayTime);
 }


 redvalue=0;
 greenvalue=0;
 bluevalue = 225;
 for(int i = 0; i <255 ; i+=1)
 {
  bluevalue -= 1;
  redvalue += 1;

  analogWrite(BLUE, bluevalue);
  analogWrite(RED, redvalue);
  delay(delayTime);
 }

  
 
  
  
  
}
  
