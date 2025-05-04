/*
ChatBot 1.0
(c) Alain Mauer
https://alainsprojects.com/2025/05/03/the-chatbot/
*/

int Mouth[5] = {2,3,4,5,6}; //define the LEDs for the Mouth
int Eyes[3] = {10,11,12}; // define the LEDs for the Eyes
int TreshHold=15; // set the Audiotreshold
int val = 0; 
int analogPin = A0;  
int MouthCounter = 0;
unsigned long Timer = 0;
int EyeTime =1000;
int BlinkStatus=0;

void EyeOpen(){
  digitalWrite(Eyes[0],HIGH);digitalWrite(Eyes[1],LOW);digitalWrite(Eyes[2],HIGH);
  }
void EyeClose(){
  digitalWrite(Eyes[0],LOW);digitalWrite(Eyes[1],HIGH);digitalWrite(Eyes[2],LOW);
}
void setup() {
    
  pinMode(analogPin, INPUT);
  pinMode(10,OUTPUT);pinMode(11,OUTPUT);pinMode(12,OUTPUT);
  pinMode(2,OUTPUT);pinMode(3,OUTPUT);pinMode(4,OUTPUT);pinMode(5,OUTPUT);pinMode(6,OUTPUT);
  EyeOpen();
}


void loop() {
Timer=millis();
do{
  
  val = analogRead(analogPin); 

  if (val > TreshHold) {digitalWrite (Mouth[0],HIGH);MouthCounter++; if (MouthCounter>4) MouthCounter=4; digitalWrite (Mouth[MouthCounter],HIGH);}
  if (val == 0) {MouthCounter=0; 
              for (int i = 0; i <= 4; i++) {
                                            digitalWrite(Mouth[4-i], LOW);
                                            }
              }
}while(millis()-Timer<EyeTime);
BlinkStatus=!BlinkStatus;
 
if (BlinkStatus==1) {EyeClose();EyeTime=random(100,500);} 
if (BlinkStatus==0) {EyeOpen();EyeTime=random(500,4000);}
}
