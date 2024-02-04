int LED = 10;
int boton = 6;
bool estado = true;
bool estado_anterior = true;

void setup() {
  // put your setup code here, to run once:
    pinMode(LED, OUTPUT);
    pinMode(boton, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
    estado = digitalRead(boton);
    if (estado!=estado_anterior)
      {
        if(estado == LOW)
          digitalWrite(LED, !digitalRead(LED));
        estado_anterior = estado;
      }
}
