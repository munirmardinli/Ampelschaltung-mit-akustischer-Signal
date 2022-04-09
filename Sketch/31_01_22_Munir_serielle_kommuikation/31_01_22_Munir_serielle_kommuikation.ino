void setup()

/*
initialisiere serielle Kommunikation mit 9600 bps
*/ 
{

  Serial.begin(9600);
}
  void loop()

{ 
  /* 
  Schreibe „Hallo Welt!“
  */

  Serial.println("Hallo Munir!"); 
  /* 
  warte 50 Millisekunden vor dem nächsten Loop
  */ 
  delay(50);

}
