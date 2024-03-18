// C++ code

// 06- Ao apertar o botão uma vez, liga um led. Ao apertar novamente, desliga o primeiro, liga o
// Segundo. Ao apertar novamente, desliga o segundo liga o terceiro
// https://www.tinkercad.com/things/6rpwhOYlqjk-l2ex02

// Setup
int button = 2;
int led = 2;

void setup() {
    pinMode(button, INPUT);
    for (int i = 3; i <= 5; i++) {
        pinMode(i, OUTPUT);
    }
}

// Loop
void loop() {
    bool buttonStatus = digitalRead(button);

    if (buttonStatus == true) {
        digitalWrite(led, LOW); // Desliga o LED atual

        // Avança para o próximo LED
        led++;

        // Se alcançamos o último LED, voltamos ao primeiro
        if (led > 5) {
            led = 3; // Primeiro LED
        }

        digitalWrite(led, HIGH); // Liga o próximo LED
        delay(200); // Pequeno delay para evitar leituras múltiplas do botão
    }
}
