int leds[8] = {2, 3, 4, 5, 5, 6, 7, 8};

int pulsador = 2;
int sw = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(pulsador, INPUT_PULLUP);
  pinMode(sw, INPUT_PULLUP);

   for (int x=1; x<8; x++){
    pinMode(leds[x], OUTPUT);
  }
  
  Serial.begin(9600);  
}

int v;

void loop() {
  // put your main code here, to run repeatedly
  vPulsador = digitalRead(pulsador);
  vSW = digitalRead(pulsador);

  Serial.println("Pulsador :" + String(vPulsador) + " Switch: " + String(vSW);

  delay(100);
}
