int PIN_PWM_A = 3;
int PIN_PWM_B = 11;
int PIN_DIR_A = 12;
int PIN_DIR_B = 13;
int PIN_BRAKE_A = 9;
int PIN_BRAKE_B = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_PWM_A, OUTPUT);
  pinMode(PIN_PWM_B, OUTPUT);
  pinMode(PIN_DIR_A, OUTPUT);
  pinMode(PIN_DIR_B, OUTPUT);
  pinMode(PIN_BRAKE_A, OUTPUT);
  pinMode(PIN_BRAKE_B, OUTPUT);
}

void loop() {
  analogWrite(PIN_PWM_A, 100);
}
