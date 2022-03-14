int leds[8] = {2, 3, 4, 5, 5, 6, 7, 8};

void setup() {
  // put your setup code here, to run once:
  for (int x=1; x<8; x++){
    pinMode(leds[x], OUTPUT);
  }

  Serial.begin(9600);
  
}

int v, vNueva;

void loop() {
  // put your main code here, to run repeatedly:
   v = analogRead(A0);
   vNueva = map(v, 0, 1023, 0, 7);
   //v = valor a mapear
   //0 = limite inferior origen
   //1023 = limite superior origen
   //0 = limte inferior destino
   //7 = limite superior intervalo destino
   Serial.println("v: " +String(v) + " vNueva: "+ String(vNueva));
   delay(100);
}
