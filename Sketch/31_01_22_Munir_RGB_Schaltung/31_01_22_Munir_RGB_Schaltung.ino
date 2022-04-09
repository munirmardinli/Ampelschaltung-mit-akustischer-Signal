/*
Zunächst muss jeder Anschluss der Farbpins der LED angegeben werden!
*/

int redPin = 5;
int bluePin = 6;
int greenPin = 7;


/*
 Jetzt werden im „setup“ die drei Pins als OUTPUT definiert!
*/

void setup()
{
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);
pinMode(greenPin, OUTPUT);

}


void loop()
{
setColor(255,0,0); // red
delay(1000);
setColor(0,0,255); // blue
delay(1000);
setColor(0,255,0); // green
delay(1000);
setColor(255,255,0); // yellow
delay(1000);
setColor(255,0,255); // purple
delay(1000);
setColor(0,255,255); // aqua
delay(1000);
}

/*
Die folgende Funktion legt die Argumente für die Helligkeit von jeder der drei Farben zwischen 0und255 fest!
*/
void setColor(int red, int green, int blue)
#
/*
Um diese aufzurufen, wird der Befehl “analogWrite” genutzt!
*/

{
  #ifdef COMMON_ANODE
  red=255 - red;
  blue=255 - blue;
  green=255 - green;

  #endif
      analogWrite(redPin, red);
analogWrite(bluePin, blue);
analogWrite(greenPin, green);


}

/*
 Im folgenden “loop”-Bereich wird der genaue Helligkeitswert mit Pause zwischen den Farben angegeben!
*/
