// C++ code

// 10 - Crie uma lógica a qual o botão deve ligar o led somente se um dos dois botões for pressionado. Se ambos
// Forem pressionados juntos, o led não deve ligar.
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
        digitalWrite(led, HIGH); // Desliga o LED
    }
    if (button1Status == true && button2Status == true) {
        digitalWrite(led, LOW); // Desliga o LED
    }
}