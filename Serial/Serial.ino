void setup()
  {
    for (int i=9 ; i<12 ; i++)
      pinMode(i, OUTPUT);
  }
void Color(int R, int G, int B)
  {
      analogWrite(11 , G) ;
      analogWrite(10 , B) ;
      analogWrite(9 , R) ;
  }
void loop()
{
    Color(random(255), random(255), random(255));
    delay(500);
}
