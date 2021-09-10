int p_in = 2;
int p_out = 3;

void setup() {
    //pinMode(LED_BUILTIN, OUTPUT);
    pinMode(p_in, INPUT);
    pinMode(p_out, OUTPUT);
}

void loop() {
    //digitalWrite(LED_BUILTIN, LOW);
    if (digitalRead(p_in) == LOW) {
        digitalWrite(p_out, HIGH);
    } else {
        digitalWrite(p_out, LOW);
    }
    delay(10);
}
