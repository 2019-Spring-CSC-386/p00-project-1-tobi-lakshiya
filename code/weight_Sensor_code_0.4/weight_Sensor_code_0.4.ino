int buzzer = 7;
int fsrPin = A2;
int CurrentWeight;
int PrevWeight;
bool Check = false;
int fsrVal = analogRead(fsrPin);
unsigned long StartTime = millis();
unsigned long CheckTime =10000;

void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  PrevWeight = 700;
  Check = false;

}

void loop() {
  StartTime = millis();
  fsrVal = analogRead(fsrPin);
  Serial.println("prevWeight: ");
  Serial.println(PrevWeight);
  Serial.println("Fsr: ");
  Serial.println(fsrVal);
  CurrentWeight = fsrVal;
  //Serial.print('\n');
  //Serial.print(StartTime);
  //Serial.print("\n Check passed");
  //Serial.print(CheckTime);

  if ((StartTime > 100) && (StartTime < 5000))
  {
    StartDay();
    Serial.println("start"); 
  }
  else if ((StartTime > 5100) && (StartTime < 100000))
  {
    MiddleDay();
    Serial.println("middle");
  }
  else if ((StartTime > 100000))
  {
    EndDay();
    Serial.println("end");  
  }
  delay(500);
  }
;
  void StartDay(){
    
    if (fsrVal < 500 && Check == false) {
    tone (buzzer, 200);
    }
    else{
    Check = true;
    noTone (buzzer);
    }
  }

  void MiddleDay(){
    Check = false;
    //Serial.println("start time: ");
    //Serial.println(StartTime);
    //Serial.println("check time: ");
    //Serial.println(CheckTime);
    if ((StartTime > CheckTime) && (fsrVal < 50)) {
      tone (buzzer, 500);
    } 
    else if((fsrVal < PrevWeight) && (fsrVal > PrevWeight - 200)) {
      PrevWeight = CurrentWeight;
      noTone (buzzer);
      CheckTime = StartTime + 10000;
    }
    else if(fsrVal > PrevWeight) {
      tone (buzzer, 200);
      Serial.println("asdfasdfasd");
    }
  }
  void EndDay(){
    if (fsrVal > 400 || fsrVal < 50 && Check == false) {
    tone (buzzer, 500);
    }
    if (fsrVal < 400 && fsrVal > 50) {
    Check = true;
    }
    
    }
  
