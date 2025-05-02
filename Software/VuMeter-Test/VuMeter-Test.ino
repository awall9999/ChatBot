int Mouth[5] = {2,3,4,5,6}; //define the LEDs for the Mouth
int Eyes[3] = {10,11,12}; // define the LEDs for the Eyes
int val = 0; 
int analogPin = A0;  

void setup() {
  Serial.begin(9600);   
  pinMode(analogPin, INPUT);
  pinMode(10,OUTPUT);pinMode(11,OUTPUT);pinMode(12,OUTPUT);
  pinMode(2,OUTPUT);pinMode(3,OUTPUT);pinMode(4,OUTPUT);pinMode(5,OUTPUT);pinMode(6,OUTPUT);



}

void loop() {
val = analogRead(analogPin); 
  //if (val < 8) val =0;             
                      
  int analogvalue=val;
  Serial.println(val);Serial.print(" - ");  

}
