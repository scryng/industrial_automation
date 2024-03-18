// C++ code

// 09- O botão 1 liga o led permanentemente, o botão 2 desliga o led permanentemente, e se pressionados,
// Ambos ao mesmo tempo, o led ficará piscando até que se solte um deles. O botão que ficar pressionado,
// mantém o led no estado em que deve estar.
// https://www.tinkercad.com/things/6rpwhOYlqjk-l2ex02

// Setup
int button1 = 6;
int button2 = 4;
int led = 3;

void setup() {
    pinMode(button1, INPUT);
    pinMode(button2, INPUT);
    pinMode(led, OUTPUT);
}

// Loop
void loop() {

    bool button1Status = digitalRead(button1);
    bool button2Status = digitalRead(button2);
    
    if (button1Status == true) {
        digitalWrite(led, HIGH); // Liga o LED
    }
    if (button2Status == true) {
        digitalWrite(led, LOW); // Desliga o LED
    }
    if (button1Status == true && button2Status == true) {
        digitalWrite(led, HIGH); // Liga o LED
        delay(500);
        digitalWrite(led, LOW); // Desliga o LED
        delay(500);
    }
}