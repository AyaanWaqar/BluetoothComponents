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
    digitalWrite(led,1);
    delay(1000);

  }
   else{
    digitalWrite(led,0);
  }
}

