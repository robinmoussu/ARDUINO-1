void setup() {
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
digitalWrite(6, HIGH);
digitalWrite(7, HIGH);
digitalWrite(8, HIGH);
digitalWrite(9, HIGH);
delay(1000);
digitalWrite(6, LOW);
digitalWrite(7, LOW);
digitalWrite(8, LOW);
digitalWrite(9, LOW);

}

void loop() {
int bgg = 0; //bouton gauche
int bmg = 0; //bouton milieu gauche
int bmd = 0; //bouton milieu droite
int bdd = 0; //bouton droite
int lgg = 0; //led gauche
int lmg = 0; //led milieu gauche
int lmd = 0; //led milieu droite
int ldd = 0; //led droite
bgg = digitalRead(2);
bmg = digitalRead(3);
bmd = digitalRead(4);
bdd = digitalRead(5);
lgg = digitalRead(6);
lmg = digitalRead(7);
lmd = digitalRead(8);
ldd = digitalRead(9);
#define blinkoff digitalWrite(6, LOW); delay (250); digitalWrite(7, LOW); delay (250); digitalWrite(8, LOW); delay (250); digitalWrite(9, LOW); delay (250)
#define blinkon digitalWrite(6, HIGH); delay (250); digitalWrite(7, HIGH); delay (250); digitalWrite(8, HIGH); delay (250); digitalWrite(9, HIGH); delay (250)
#define off digitalWrite(6, LOW); digitalWrite(7, LOW); digitalWrite(8, LOW); digitalWrite(9, LOW)
#define on digitalWrite(6, HIGH); digitalWrite(7, HIGH); digitalWrite(8, HIGH); digitalWrite(9, HIGH)
if (bgg == HIGH){
  if (lgg == LOW) {
    digitalWrite(6, HIGH);
    delay (250);
    }
  else {
    digitalWrite(6, LOW);
    delay (250);
    }
}
if (bmg == HIGH){
  if (lmg == LOW) {
    digitalWrite(7, HIGH);
    delay (250);
    }
  else {
    digitalWrite(7, LOW);
    delay (250);
    }
}
if (bmd == HIGH){
  if (lmd == LOW) {
    digitalWrite(8, HIGH);
    delay (250);
    }
  else {
    digitalWrite(8, LOW);
    delay (250);
    }
}
if (bdd == HIGH){
  if (ldd == LOW) {
    digitalWrite(9, HIGH);
    delay (250);
    }
  else {
    digitalWrite(9, LOW);
    delay (250);
    }
  }

if (lgg & lmg & lmd & ldd == HIGH) {
   blinkoff;
   blinkon;
   blinkoff;
   for (int i=0; i <= 15; i++){ 
   on;
   delay(50);
   off;
   delay(50);
   }
}

}
