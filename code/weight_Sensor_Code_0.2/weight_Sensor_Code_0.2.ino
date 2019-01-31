int pingPin = 7;
int fsrPin = A0;
unsigned long time;
bool check = false;
int num = 0;
void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(pingPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {

  int fsrVal = analogRead(fsrPin);
  time = millis();  
  Serial.print(fsrVal);
  if ((time >= num+60000)&& (fsrVal < 500)) {
      digitalWrite(pingPin, HIGH);
      check = true;
  if ((time >= 60000)&& (fsrVal > 500) && (check = true)){
      num = millis();// need to add code to reset timer here
      check = false;
    }
  }
    
}
