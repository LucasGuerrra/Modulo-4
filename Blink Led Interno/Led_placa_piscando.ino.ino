//Definindo o pino que o led já instalado na placa funciona
int led = 13;
//Definindo tempos do led ligado e desligado respectivamente
int x = 1000;
int y = 500;

//Dizendo que o pino 13 vai servir para output 
void setup() {
  pinMode(led, OUTPUT); 
}

//Usando o loop default da placa ele liga e desliga o pino a partir dos tempos previamente passados
void loop() {
  digitalWrite(led, HIGH);
  delay(x);
  
  digitalWrite(led, LOW);
  delay(y);
}