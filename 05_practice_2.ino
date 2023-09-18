#define PIN_LED 7

void setup() {
  pinMode(PIN_LED, OUTPUT); //LED 핀을 출력으로 설정
}

void loop() {
  //LED를 1초 동안 켭니다.
  digitalWrite(PIN_LED, 0);
  delay(1000);
  digitalWrite (PIN_LED, 0);

  //LED를 5회 깜빡이도록 반복합니다.
  for (int i = 0; i < 5; i++) {
    digitalWrite(PIN_LED, 1); //LED를 끕니다.
    delay(100); //0.5초 대기
    digitalWrite(PIN_LED, 0); //LED를 다시 켭니다.
    delay(100); //0.5초 대기
  }

  //LED를 끄고 무한 루프 상태로 유지합니다.
  digitalWrite(PIN_LED, 1);
  delay(1000);
  while(1) {
    //LED를 끕니다.
    digitalWrite(PIN_LED, 1);
  }
}
