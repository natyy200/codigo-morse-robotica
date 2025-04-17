/* Programa: Código Morse */
/* Definindo os pinos do Buzzer, botão e LED */
int buzzer = 2;
int botao = 3;
int LED = 4;

void setup()
{
/* Define os pinos do LED e Buzzer como saída */
  pinMode(buzzer, OUTPUT);
  pinMode(LED, OUTPUT);
  /* Define o pino do botão como entrada e ativa o resistor
  interno */
  pinMode(botao, INPUT_PULLUP);
}

void loop()
{ 
  /* Verifica se o botão está pressionado e então liga o LED e
emite o som */
  if (digitalRead(botao) == LOW) {
    digitalWrite(LED, HIGH);
    tone(buzzer, 800);
  }
/* Senão desligue o LED e pare o som */
  else {
    digitalWrite(LED, LOW);
    noTone(buzzer);
  }
}
