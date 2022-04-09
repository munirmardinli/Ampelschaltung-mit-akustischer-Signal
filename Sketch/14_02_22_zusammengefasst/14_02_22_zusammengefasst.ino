/* In diesem Code wird folgende Prokjete eingebaut: 
 -  RGB-LED
 -  Ameplschaltung (rot,gelb,grün)
 -  Ein LED- als Probe
 -  Serien-Monitor
 -  Hochzähler
 */



// Varibalen und Konstanten definieren
const int LED_rot_Pin = 13;
const int LED_gelb_Pin = 12;
const int LED_gruen_Pin = 11;
const int LED_blue_Probe= 10;


const int LED_RGB_rot_Pin =2;
const int LED_RGB_gruen_Pin =3;
const int LED_RGB_blau_Pin = 4;

const int Zeit_rot_Phase = 2; 		          // Sekunden
const int Zeit_rot_gelb_Phase = 2;  	      // Sekunden
const int Zeit_gelb_Phase = 2; 		          // Sekunden
const int Zeit_gruen_Phase = 2;        	    // Sekunden

int Zaehler = 0;


void setup() {

  /* Serial-Monitor Code */
  Serial.begin(9600);
  Serial.println("Hallo Munirs Welt! Die Ampel startet gleich, ich schwoere auf Herrn Woederhoff, die Nervensaege");
  
  // die erste LED-Probe
  pinMode(LED_blue_Probe,OUTPUT);

  // Pinmodus setzen
  pinMode(LED_rot_Pin, OUTPUT);	
  pinMode(LED_gelb_Pin, OUTPUT);
  pinMode(LED_gruen_Pin, OUTPUT);

  pinMode(LED_RGB_rot_Pin, OUTPUT); 
  pinMode(LED_RGB_gruen_Pin, OUTPUT);
  pinMode(LED_RGB_blau_Pin, OUTPUT);
  
  /* Zu Beginn ampel ausschalten */
  Ampel_aus();

}

  /* Zu Beginn ampeln einschalten */
void Ampel_aus() {
  digitalWrite(LED_rot_Pin, LOW);
  digitalWrite(LED_gelb_Pin, LOW);
  digitalWrite(LED_gruen_Pin, LOW);
}

  /* die rote-LED geht für eine Sekunde an */
void rot_Phase()
{
  digitalWrite(LED_rot_Pin, HIGH);
  digitalWrite(LED_gelb_Pin, LOW);
  digitalWrite(LED_gruen_Pin, LOW);
  delay(Zeit_rot_Phase*1000);
}

  /* die gelbe-LED bleibt mit dem roten-LED für eine Sekunde an */
void rot_gelb_Phase()
{
  digitalWrite(LED_rot_Pin, HIGH);
  digitalWrite(LED_gelb_Pin, HIGH);
  digitalWrite(LED_gruen_Pin, LOW);
  delay(Zeit_rot_gelb_Phase*1000);
}

  /*  die gelbe-LED bleibt für eine Sekunde an */
void gelb_Phase()
{
  digitalWrite(LED_rot_Pin, LOW);
  digitalWrite(LED_gelb_Pin, HIGH);
  digitalWrite(LED_gruen_Pin, LOW);
  delay(Zeit_gelb_Phase*1000);
}

  /* die gründe-LED geht für eine Sekunde an */
void gruen_Phase()
{
  digitalWrite(LED_rot_Pin, LOW);
  digitalWrite(LED_gelb_Pin, LOW);
  digitalWrite(LED_gruen_Pin, HIGH);
  delay(Zeit_gruen_Phase*1000);
}

  /*  eine Funktion für die Zähler */
void Counter() {
  /* Erhöht den Zaehler um 1 und gibt seriel aus */
  Zaehler = Zaehler + 1;
  Serial.println(Zaehler);
}

  // eine Funktion für RGB-LED
void RGB_LED() {
   analogWrite(LED_RGB_rot_Pin,random(0, 255));
   analogWrite(LED_RGB_gruen_Pin,random(0, 255));
   analogWrite(LED_RGB_blau_Pin,random(0, 255));
}



void loop() {
  
  // die loop-Einstellung des Probe-LED
  digitalWrite(10,HIGH);
  delay(1000);
  digitalWrite(10,LOW);
  delay(1000);
  
  /* LED Wiederholungsphasen */
  gruen_Phase();
  Counter();
  RGB_LED();

  gelb_Phase();
  Counter();
  RGB_LED();

  rot_Phase();
  Counter();
  RGB_LED();

  rot_gelb_Phase();
  Counter();
  RGB_LED();
}
