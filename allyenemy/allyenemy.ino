void setup() {
  Serial.begin(115200); // 통신 속도
  pinMode(2, OUTPUT);   // 초록 LED (Ally)
  pinMode(3, OUTPUT);   // 빨간 LED (Enemy)
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();
    
    if (data == 'G') {         // Ally 신호
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    } 
    else if (data == 'R') {    // Enemy 신호
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    else if (data == 'O') {    // 끄기 신호
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
  }
}
