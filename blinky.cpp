// ------------
// Blink an LED
// ------------

int led1 = D7; 
void setup() {

    pinMode(led1, OUTPUT);

}

void dit () {
    digitalWrite(led1, HIGH);
    delay(102);
    digitalWrite(led1, LOW);
    delay(102);
}

void dah () {
    digitalWrite(led1, HIGH);
    delay(306);
    digitalWrite(led1, LOW);
    delay(102);
}

void loop() {
    dit();
    dit();
    dit();
    dit();
    
    // Space
    delay(306);
    
    dit();
    dah();
    
    // Space
    delay(306);
    
    dit();
    dah();
    dit();
    
    // Space
    delay(306);
    
    dit();
    dit();
    dit();
    dah();
    
    delay(306);
    
    dit();
    
    delay(306 );
    
    dah();
    dit();
    dah();
    dah();
    
}
