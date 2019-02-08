int buzzer = 7;
int fsrPin = A2;
int CurrentWeight;
int PrevWeight;
bool Check = false;
int fsrVal = analogRead(fsrPin);
unsigned long StartTime = millis();
unsigned long CheckTime = 14400000;

void setup() {
  // initialize serial communication:
  pinMode(fsrPin, INPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  PrevWeight = 600;
  Check = false;

}

void loop() {
  StartTime = millis();
  fsrVal = analogRead(fsrPin);
  CurrentWeight = fsrVal;
  
//runs the start code for the first 20 mins the arduino is on
  if ((StartTime > 1000) && (StartTime < 2000000))
  {
    StartDay();
    Serial.println("start"); 
  }
// runs the the middle code after 20 mins
  else if ((StartTime > 2000000) && (StartTime < 43200000))
  {
    MiddleDay();
    Serial.println("middle");
  }
// runs the middle code after 12 hours have passed.
  else if ((StartTime > 43200000))
  {
    EndDay();
    Serial.println("end");  
  }
  delay(500);
  }

// this fucntion checks if you have a full water bottle
// at the beginning of the day.
  void StartDay(){
    if (fsrVal < 600 && Check == false) {
    tone (buzzer, 500);
    }
    else{
    Check = true;
    noTone (buzzer);
    }
  }

// this fucntion checks every 4 hours if you are drinking water
  void MiddleDay(){
    Check = false;
    if ((StartTime > CheckTime) && (fsrVal < 50)) {
      tone (buzzer, 500);
    } 
    else if((fsrVal < PrevWeight) && (fsrVal > PrevWeight - 200)) {
      PrevWeight = CurrentWeight;
      noTone (buzzer);
      CheckTime = StartTime + 14400000;
    }
    else if(fsrVal > PrevWeight) {
      tone (buzzer, 200);
    }
  }

// this code checks if the water botal is emtpy
  void EndDay(){
    if (fsrVal > 300 || fsrVal < 50 && Check == false) {
    tone (buzzer, 500);
    }
    if (fsrVal < 300 && fsrVal > 50) {
    Check = true;
    }
  }
  
