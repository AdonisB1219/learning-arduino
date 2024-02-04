  int sensor=0;
  long x;
  long temp;
  int brillo; 
  int i; 

void setup() {
  for(i=9; i<12; i++)
    pinMode(i, OUTPUT); 
}

void Color(int R, int G, int B)
{
  analogWrite(9, R);
  analogWrite(10, B);
  analogWrite(11, G);
}
void loop() {
  x=analogRead(sensor)*5000L/1023;
  temp=x/10;
  brillo=map(temp, 15, 40, 0, 255);
  brillo=constrain(brillo, 0, 255);
  Color(brillo, brillo/2, 255-brillo);
}
