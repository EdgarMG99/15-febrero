int Rojo=12;
int Azul=11;
int Tr;
int Ta;

void setup() {
  Serial.begin(9600);
  Serial.println("¿Cuantas veces parpadeara el led Rojo?");
  while (Serial.available()==0){
  }
  Tr=Serial.parseInt();
  Serial.end();
  pinMode(Rojo,OUTPUT);
  
  Serial.begin(9600);
  Serial.println("¿Cuantas veces parpadeara el led Azul?");
  while (Serial.available()==0){
  }
  Ta=Serial.parseInt();
  Serial.end();
  pinMode(Azul,OUTPUT);
}

void loop() {

for (int i=0; i<Tr; i++){
digitalWrite(Rojo,HIGH);
delay(500);
digitalWrite(Rojo,LOW);
delay(500);
}

for (int j=0; j<Ta; j++){
digitalWrite(Azul,HIGH);
delay(500);
digitalWrite(Azul,LOW);
delay(500);
}
}
