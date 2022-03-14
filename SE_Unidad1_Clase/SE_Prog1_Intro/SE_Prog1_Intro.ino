int leds[8] = {0, 1, 2, 3, 4, 5, 6, 7};

void setup() {
  // put your setup code here, to run once:
  for (int x=1; x<8; x++){
    pinMode(leds[x], OUTPUT);
  }

  randomSeed(analogRead(A0));
}

int v;

void loop() {
  // put your main code here, to run repeatedly:
  limpiar();
  v = random(8); //[0 - 7]
  digitalWrite(leds[v], 1);
  delay(1000);
}

void limpiar(){
  for (int x=0; x<8; x++){
    digitalWrite(leds[x],0);
  }
}
