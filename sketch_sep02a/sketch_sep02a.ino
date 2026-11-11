void setup() {
  Serial.begin(115200);
  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    char data = Serial.read();
    
    if (data == 'G') {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
    } 
    else if (data == 'R') {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
    }
    else if (data == 'O') {
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
    }
  }
}
