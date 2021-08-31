/**
 * Blinking LED (tested on ESP WROOM32)
 * Param Siddharth.
 */

void setup() {
	Serial.begin(115200);
	Serial.println("Setting up...");
	pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
	Serial.println("Blink!");
	digitalWrite(LED_BUILTIN, HIGH);
	delay(500);
	digitalWrite(LED_BUILTIN, LOW);
	delay(500);
}