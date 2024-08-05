// acende e apaga o led quando aciona o botão
int valor;
int anterior;
int estadoBotao = LOW;
void setup(){
  pinMode (9, OUTPUT); // led
  pinMode (7, INPUT); // botao
}

void loop(){
  valor = digitalRead(7);
  if( valor== HIGH && anterior == LOW) {
   estadoBotao =! estadoBotao;
   }
  digitalWrite(9,estadoBotao);
  anterior = valor;
  delay(50);
}