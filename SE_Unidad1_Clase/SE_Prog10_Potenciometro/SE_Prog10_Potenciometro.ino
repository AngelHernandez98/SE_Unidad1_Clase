int leds[8] = {2, 3, 4, 5, 6, 7, 8, 9};

void setup() {
  // put your setup code here, to run once:
  for (int i  = 0; i < 8; i++) {
    pinMode(leds[i], OUTPUT);
  }

  Serial.begin(9600);
}

int v;
void loop() {
  // put your main code here, to run repeatedly:
  //10bits de resolucion, 5v de referencia, ADC = > 0 - 1023

  v = analogRead(A0);
  Serial.println("Valor Leido: " +String(v) );
  
  delay(100);

}
