int i,wrist_open=2,wrist_close=3,wrist_up=4,wrist_down=5,elbow_up=6,elbow_down=7,shoulder_up=8,shoulder_down=9;
char ch;
void setup(){
  // put your setup code here, to run once:
  for(i=2;i<=9;i++)
    pinMode(i,OUTPUT);  
  Serial.begin(38400);  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10);
  for(i=2;i<=9;i++)
    digitalWrite(i,HIGH);
  if(Serial.available())
  {
    if(ch=='1')
      digitalWrite(wrist_open,LOW);
    else if(ch=='2')
      digitalWrite(wrist_close,LOW);
    else if(ch=='3')
      digitalWrite(wrist_up,LOW);
    else if(ch=='4')
      digitalWrite(wrist_down,LOW);
    else if(ch=='5')
      digitalWrite(elbow_up,LOW);
    else if(ch=='6')
      digitalWrite(elbow_down,LOW);
    else if(ch=='7')
      digitalWrite(shoulder_up,LOW);
    else if(ch=='8')
      digitalWrite(shoulder_down,LOW);
    else { }     
  }              
}
