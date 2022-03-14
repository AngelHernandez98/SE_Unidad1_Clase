int leds[8] = {2, 3, 4, 5, 6, 7, 8, 9};

//bit MENOS significativo = 9
//bit MÁS significativo = 6

void setup() {
  // put your setup code here, to run once:
  for (int x = 1; x < 8; x++) {
    pinMode(leds[x], OUTPUT);
  }

  Serial.begin(9600);
  Serial.setTimeout(10);
}

int cociente; //Número decimal a leer
int residuo;
int k = 7;

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {
    cociente = Serial.readString().toInt(); //0 - 7
    k = 7;
    //Convertir v en binario para conocer los LEDS que se deberán prender
    while (cociente > 0) {
      residuo = cociente % 2;
      digitalWrite(leds[k--], residuo);
      cociente = cociente / 2;
    }

    for (; k > 0; k--) { //for (; k > 0; k--) //Versión de for que no modifica la variable de inicio
      digitalWrite(leds[k], 0);
    }
    
  }

}
