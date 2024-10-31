const uint8_t ledRed = 6;
const uint8_t ledAma = 9;
const uint8_t ledVer = 12;
// Declarando em quais pinos cada led está

const uint8_t buzzerPin = 3;
//Declarando o pino do Buzzer
void setup() {
  //Definindo que todos os pinos acima são OUTPUTs da placa
  pinMode(ledRed, OUTPUT);
  pinMode(ledAma, OUTPUT);
  pinMode(ledVer, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  //Liga o led vermelho
  digitalWrite(ledRed, HIGH);
  //Espera 6 segundos
  delay(6000);
  //Desliga o led vermelho e liga o amarelo
  digitalWrite(ledRed, LOW);
  digitalWrite(ledAma, HIGH);
  //Espera 2 segundos
  delay(2000);
  //Desliga o led amarelo, liga o verde e liga o buzzer
  digitalWrite(ledAma, LOW);
  digitalWrite(ledVer, HIGH);
  tone(buzzerPin, 1000);
  //Espera 2 segundos
  delay(2000);
  //Desliga o led verde, liga o amarelo e desliga o buzzer
  digitalWrite(ledVer,LOW);
  digitalWrite(ledAma,HIGH);
  noTone(buzzerPin);
  //Espera 2 segundos
  delay(2000);
  //Desliga o led amarelo
  digitalWrite(ledAma,LOW);
}