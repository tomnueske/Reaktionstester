/*

*/

int randomtime;
unsigned long starttime;
unsigned long endtime;
unsigned long realtime;
int buttonstate;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);
 
}

void loop() {
  buttonstate =digitalRead(6);
  while (digitalRead(6) == LOW){
    buttonstate =digitalRead(6);
  }
  digitalWrite(13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  
  randomtime = random(500,5000);
  delay(randomtime);
  
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  starttime = millis();
  buttonstate =digitalRead(6);
  while (buttonstate == LOW){
    buttonstate =digitalRead(6);
  } 
  endtime = millis();
  realtime = (endtime - starttime);
  Serial.println(realtime);
  if(realtime >= 50){
 
  digitalWrite(7, HIGH);  
  }
  if(realtime >=100){
 
  digitalWrite(8, HIGH);  
  }
  if(realtime >=150){
 
  digitalWrite(9, HIGH);  
  }
  if(realtime >=200){
 
  digitalWrite(10, HIGH);  
  }
  if(realtime >=250){
 
  digitalWrite(11, HIGH);  
  }
  if(realtime >=500){
 
  digitalWrite(12, HIGH);  
  }
  if(realtime >=750){
 
  digitalWrite(13, HIGH);  
  }
  delay(500);
  
}