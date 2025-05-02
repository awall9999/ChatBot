int Mouth[5] = {2,3,4,5,6}; //define the LEDs for the Mouth
int Eyes[3] = {10,11,12}; // define the LEDs for the Eyes

void setup() {
  pinMode(A0, INPUT);
  pinMode(10,OUTPUT);pinMode(11,OUTPUT);pinMode(12,OUTPUT);
  pinMode(2,OUTPUT);pinMode(3,OUTPUT);pinMode(4,OUTPUT);pinMode(5,OUTPUT);pinMode(6,OUTPUT);



}

void loop() {
for (int i = 0; i <= 2; i++) {
        digitalWrite(Eyes[i], HIGH);
        delay(500);
      }
for (int i = 0; i <= 5; i++) {
        digitalWrite(Mouth[i], HIGH);
        delay(500);
      }
delay(500);
for (int i = 0; i <= 5; i++) {
        digitalWrite(Mouth[i], LOW);
        delay(500);
      }
for (int i = 0; i <= 2; i++) {
        digitalWrite(Eyes[i], LOW);
        delay(500);
      }
delay(500);
}
