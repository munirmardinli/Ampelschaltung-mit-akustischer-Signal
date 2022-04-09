// Fahrbahnampel
int ROT = 3;
int GELB = 4;
int GRUEN = 5;

// Fußgängerampel
int F_ROT = 6;
int F_GRUEN = 7;

// Taster
int TASTER = 12;

// Status des Taster
int TasterLesen;

//Summer
int Summer = 13;


void setup()
{
// Fahrbahnampel
pinMode(ROT, OUTPUT);
pinMode(GELB, OUTPUT);
pinMode(GRUEN, OUTPUT);

// Fußgängerampel
pinMode(F_ROT, OUTPUT);
pinMode(F_GRUEN, OUTPUT);


pinMode(TASTER, INPUT_PULLUP);
//Summer
pinMode(Summer,OUTPUT);
}
void loop()
{

digitalWrite(F_ROT, HIGH);
digitalWrite(GRUEN, HIGH);


TasterLesen = digitalRead(TASTER);
delay(200);


if (TasterLesen == LOW)
{
// 1 s Pause
delay(1000);


digitalWrite(GRUEN, LOW);


digitalWrite(GELB, HIGH);
delay(1000);
digitalWrite(GELB, LOW);


digitalWrite(ROT, HIGH);


delay(2000);


digitalWrite(F_ROT, LOW);
digitalWrite(F_GRUEN, HIGH);
tone(Summer,100);
delay(200);
noTone(Summer);
delay(200);
tone(Summer,100);
delay(200);
noTone(Summer);
delay(200);
tone(Summer,100);
delay(200);
noTone(Summer);
delay(200);
tone(Summer,100);
delay(200);
noTone(Summer);
delay(200);
tone(Summer,100);
delay(100);
noTone(Summer);
delay(100);
tone(Summer,100);
delay(100);
noTone(Summer);
delay(100);
tone(Summer,100);
delay(100);
noTone(Summer);
delay(100);
tone(Summer,100);
delay(100);
noTone(Summer);
delay(100);
tone(Summer,100);
delay(100);
noTone(Summer);
delay(100);

digitalWrite(F_GRUEN, LOW);
digitalWrite(F_ROT, HIGH);


delay(1000);


digitalWrite(GELB, HIGH);
delay(1000);
digitalWrite(ROT, LOW);
digitalWrite(GELB, LOW);
}
} 