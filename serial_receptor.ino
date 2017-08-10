
int l = 13;

void setup(){
  Serial.begin(9600);
  pinMode(l, OUTPUT);
}

void loop(){
  if(Serial.available()){
  int v = Serial.read();
  Serial.println(v);
      digitalWrite(l, HIGH);
  delay(1000);
  digitalWrite(l, LOW);
  delay(1000);
    }
  }
