uint16_t b=5;
uint16_t a=4;
void setup() {
  Serial.begin(115200);
  pinMode(a, INPUT);
  pinMode(b, OUTPUT);
}
void loop() {
  int ldrc = digitalRead(a);
  Serial.println(ldrc);
  if (ldrState == LOW) {
    digitalWrite(b, HIGH);
    //light not 
  }
  else {
 // Light detected
    digitalWrite(b, LOW);

  }
}
