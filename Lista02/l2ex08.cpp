// C++ code

// 08- Escreva um programa que acenda o LED sempre que o sensor de movimento detectar
// movimento e o apague após um intervalo de tempo.
// https://www.tinkercad.com/things/6rpwhOYlqjk-l2ex02

// Setup
int sensor = 2;
int led = 3;

void setup() {
    pinMode(sensor, INPUT);
    pinMode(led, OUTPUT);
}

// Loop
void loop() {

    // Verifica se o botão está pressionado no momento do setup
    bool sensorStatus = digitalRead(sensor);
    
    // Se o botão está pressionado, incrementa o contador de cliques
    if (sensorStatus == true) {
        digitalWrite(led, HIGH); // Liga o LED
        delay(5000); // Piscar o LED
        digitalWrite(led, LOW); // Desliga o LED
    }
}