int pot = A0;
int pV;
int l = 13;


void setup (){
  Serial.begin(9600);
  pinMode(l, OUTPUT);
}

void loop(){
  pV = analogRead(pot);
  if(pV < 510){
      digitalWrite(l, HIGH);
      
    }else{
        digitalWrite(l, LOW);
          Serial.println(1);
      }
}

