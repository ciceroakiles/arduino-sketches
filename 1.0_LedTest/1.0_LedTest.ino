int time = 2;
int pin = 3;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(pin, OUTPUT);
}

void loop() {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(pin, HIGH);
    delay(1000 * time);
    digitalWrite(pin, LOW);
    delay(1000 * time);
}
