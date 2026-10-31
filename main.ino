void setup() {
  pinMode(6, INPUT);  //flamme
  pinMode(2, INPUT);  //gaz
  pinMode(3, OUTPUT); //rouge
  pinMode(4, OUTPUT); //vert
  pinMode(5, OUTPUT); //buzzer
}

void loop() {
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  
  int fireValue = digitalRead(6);
  int val = digitalRead(2);

  if ((fireValue == 0) || (val == 0)){    // 🚨 Danger détecté (gaz ou flamme)
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  } else {                                // ✅ Sécurité
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  }

  delay(200);
}
