/* Zählt über den seriellen Port*/

void setup()

  /*
  siehe oben
  */ 
  { 
    Serial.begin(9600);
}

  /* 
  Deklariere Variable “int” mit der Bezeichnung “nummer” und Ausgangswert
  */ 
  int nummer = 0;

  void loop()
{ 
  Serial.println("1");
  Serial.println("2"); 
  /*
  Warte 500 Millisekunden
  */ 
  delay(500);
  /* 
  Zugriff Variable „nummer“ mit Anweisung hochzuzählen
  */
  
}
