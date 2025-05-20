#define BUTTON_PIN 7  
#define LED_PIN 13    

bool lastButtonState = HIGH; 

void setup() {
    pinMode(BUTTON_PIN, INPUT_PULLUP); 
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    bool buttonState = digitalRead(BUTTON_PIN);

    
    if (buttonState == LOW && lastButtonState == HIGH) {
        Serial.println("Nút được nhấn!");
        digitalWrite(LED_PIN, HIGH);  
        delay(200);                   
        digitalWrite(LED_PIN, LOW);   
    }

    lastButtonState = buttonState;  
}
