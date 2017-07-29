const int bombillo = 2;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(bombillo, OUTPUT);
}

void loop() {
  int valor = analogRead(A0);
  Serial.println(valor);
  if(valor < 512){
    digitalWrite(bombillo,HIGH);
  }else{
    digitalWrite(bombillo,LOW);
  }
}
