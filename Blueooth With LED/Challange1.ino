int led=13;

char t;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  while(Serial.available()>0){
     t=Serial.read();
      Serial.println(t);
  }
  if(t=='F'){
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);

  }
   else if (t=='B'){
    digitalWrite(led,HIGH);
    delay(5000);
    digitalWrite(led,LOW);
    delay(5000);
  }
  else if (t=='R'){
    digitalWrite(led,HIGH);
    delay(10000);
    digitalWrite(led,LOW);
    delay(10000);
}
  else if (t=='L'){
    digitalWrite(led,HIGH);
    delay(15000);
    digitalWrite(led,LOW);
    delay(15000);
  }
}
