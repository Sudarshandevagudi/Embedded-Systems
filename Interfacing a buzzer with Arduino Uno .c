const int buzzerPin = 8;
int melody[] = {262, 294, 330, 349, 392, 440, 494, 523}; 
int duration = 4000; 

void setup() {
  pinMode(buzzerPin, OUTPUT);
}
void loop() {
  for (int i = 0; i < 8; i++) {
    tone(buzzerPin, melody[i]); 
    delay(duration);
    noTone(buzzerPin); 
    delay(50); 
  }
  delay(2000); 
}
