const int ARD1 = D2;
const int LED = D7;
const int ARD2 = D8;
int ARDstate1 = 0;
int ARDstate2 = 0;

void setup(){ 
  pinMode(LED, OUTPUT);
  pinMode (ARD1, INPUT);
  pinMode (ARD2, INPUT);
  Serial.begin(9600);
 }
void loop() {
  ARDstate1 = digitalRead(ARD1);
  ARDstate2 = digitalRead(ARD2); 
  if (ARDstate1 == LOW)
    {
      digitalWrite(D7, LOW);
    }
    else
    {
      digitalWrite(D7, HIGH);
    }
    if (ARDstate2 == HIGH)
    {
     digitalWrite(D4, HIGH);
     Serial.print("mpu: ");
     Serial.println(digitalRead(ARDstate2));
    }
    else
    {
      digitalWrite(D4, LOW);
    }
}
