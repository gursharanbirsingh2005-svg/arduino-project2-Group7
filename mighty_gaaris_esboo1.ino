// Assign LED pins
// Declare variables for all 6 LEDs:
int led1 = 13;   // LED 1 on pin 2
int led2 = 12;   // LED 2 on pin 3
int led3 = 11;   // LED 3 on pin 4
int led4 = 9;   // LED 4 on pin 5
int led5 = 6;   // LED 5 on pin 6
int led6 = 3;   // LED 6 on pin 7

void setup()
{
    /*
        Set all LED pins as OUTPUT
    */
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);

    /*
        Ensure all LEDs are OFF when starting the program
    */
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);

}

void loop()
{
    // LED 1 ON
    digitalWrite(led1, HIGH);
    Serial.println("LED 1 ON");
    delay(600);
    digitalWrite(led1, LOW);

    // LED 2 ON
    digitalWrite(led2, HIGH);
    Serial.println("LED 2 ON");
    delay(600);
    digitalWrite(led2, LOW);

    // LED 3 ON
    digitalWrite(led3, HIGH);
    Serial.println("LED 3 ON");
    delay(600);
    digitalWrite(led3, LOW);

    // LED 4 ON
    digitalWrite(led4, HIGH);
    Serial.println("LED 4 ON");
    delay(600);
    digitalWrite(led4, LOW);

    // LED 5 ON
    digitalWrite(led5, HIGH);
    Serial.println("LED 5 ON");
    delay(600);
    digitalWrite(led5, LOW);

    // LED 6 ON
    digitalWrite(led6, HIGH);
    Serial.println("LED 6 ON");
    delay(600);
    digitalWrite(led6, LOW);
}
