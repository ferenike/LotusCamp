#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
int ban1 = 2;
int ban2 = 3;
int ban3 = 4;
int ban4 = 5;
int ban5 = 6;
int ban6 = 7;
int ban7 = 8;
int ban8 = 9;
int bocina = 12;
void setup() {
  Serial.begin(9600);
  pinMode(ban1, INPUT);
  pinMode(ban2, INPUT);
  pinMode(ban3, INPUT);
  pinMode(ban4, INPUT);
  pinMode(ban5, INPUT);
  pinMode(ban6, INPUT);
  pinMode(ban7, INPUT);
  pinMode(ban8, INPUT);
  pinMode(bocina, OUTPUT);

}

void loop() {
  if (digitalRead(ban1) == LOW){
    tone(bocina, NOTE_C4);
    delay(100);
    }
  if (digitalRead(ban2) == LOW){
    tone(bocina, NOTE_D4);
    delay(100);
    }
  if (digitalRead(ban3) == LOW){
    tone(bocina, NOTE_E4);
    delay(100);
    }
  if (digitalRead(ban4) == LOW){
    tone(bocina, NOTE_F4);
    delay(100);
    }
  if (digitalRead(ban5) == LOW){
    tone(bocina, NOTE_G4);
    delay(100);
    }
  if (digitalRead(ban6) == LOW){
    tone(bocina, NOTE_A4);
    delay(100);
    }
  if (digitalRead(ban7) == LOW){
    tone(bocina, NOTE_B4);
    delay(100);
    }
  if (digitalRead(ban8) == LOW){
    tone(bocina, NOTE_C5);
    delay(100);
    }
    else {noTone(bocina);
  }
}
