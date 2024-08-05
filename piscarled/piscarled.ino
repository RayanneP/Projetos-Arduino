void setup() {
//programa que envia sinal alto para a saída 7, agurada 1 segundo e envia sinal baixo para a saída 7
   pinMode (7,OUTPUT);
}

void loop() {
  digitalWrite(7,HIGH);
  delay(1000);
  digitalWrite(7,LOW);
  delay(1000);


}
