int leds[8] = {0, 1, 2, 3, 4, 5, 6, 7};

void setup() {
  // put your setup code here, to run once:
  for (int x=1; x<8; x++){
    pinMode(leds[x], OUTPUT);
  }

  Serial.begin(9600);
  Serial.setTimeout(250);
}

int v;

void loop() {
  // put your main code here, to run repeatedly:
  limpiar();

  if(Serial.available()>0){
    v = Serial.readString().toInt(); //0 - 7
    digitalWrite(leds[v], 1);
  }
  
  delay(250);
  
}

void limpiar(){
  for (int x=0; x<8; x++){
    digitalWrite(leds[x],0);
  }
}
