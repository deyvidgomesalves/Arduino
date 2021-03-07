
int pinBuzzer = 10;
int pinSensorPIR = 9;
int pinLed = 12;
int valorSensorPIR = 0;
void setup() {
pinMode(pinBuzzer, OUTPUT);
pinMode(pinSensorPIR, INPUT);
pinMode(pinLed,OUTPUT);  
}
void loop() {
valorSensorPIR = digitalRead(pinSensorPIR);
  if (valorSensorPIR== 1){
    ligarAlarme();
  } else {
desligarAlarme();
  }
}
void ligarAlarme() {
  digitalWrite(pinLed,HIGH);
  tone(pinBuzzer,440,1500);
  delay(1500);
  desligarAlarme();
}

void desligarAlarme() {
  digitalWrite(pinLed, LOW);
  noTone(pinBuzzer);
}