// C++ code //Munir_Mardinli_GOE11_Ampelschaltung
//

int rot=13;
int grun=12;
int gelb=11;
int rotfuss= 10;
int grunfuss=9;
int gelbfuss=8;

void setup()
{
  pinMode(rot ,OUTPUT);  // erste LED-Pin
  pinMode(grun,OUTPUT);  // zweite LED-Pin
  pinMode(gelb,OUTPUT);  // dritte LED-Pin
  pinMode(rot ,OUTPUT);  // erste LED-Pin
  pinMode(grun,OUTPUT);  // zweite LED-Pin
  pinMode(gelb,OUTPUT);  // dritte LED-Pin
}

void loop()   //Wiederholungskonzept
{
  digitalWrite(gelb,HIGH);    //die erste LED-pin geht an
  delay(1000);                //die erste LED-Pin bleibt eine Sekunde an!
  digitalWrite(gelb,LOW);     //die erste LED-Pin geht aus
  delay(1000);                // nach einer Skeunde geht die erste LED-Pin
  digitalWrite(grun,HIGH);
  delay(1000); 
  digitalWrite(grun,HIGH);
  delay(1000);
  digitalWrite(rot,HIGH);
  delay(2000); 
  digitalWrite(grun,HIGH);
  delay(1000); 
  digitalWrite(rot,LOW);
  digitalWrite(grun,LOW);
}
