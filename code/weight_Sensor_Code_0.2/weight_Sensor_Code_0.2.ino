int buzzer = 7;
int fsrPin = A0;
unsigned long time;
bool check = false;
int num = 0;
void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int fsrVal = analogRead(fsrPin);
  time = millis();  
  Serial.print(fsrVal);
  if ((time >= num+1000)&& (fsrVal < 500)) {
      tone (buzzer, 500);
      check = true;
  if ((time >= 60000)&& (fsrVal > 500) && (check = true)){
      num = millis();
      check = false;
    }
  }
    
}
