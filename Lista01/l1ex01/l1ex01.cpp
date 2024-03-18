// C++ code

// Declaração das variáveis

// Exercício:
// Acender um LED com botão:
// Conecte um LED a um pino digital.
// Conecte um botão a outro pino digital.
// Escreva um programa que faça o LED acender quando o botão for pressionado e apagar quando for liberado.
// https://www.tinkercad.com/things/3oAHO9MwAg4-l1ex01

int button = 6;
int led = 4;

void setup()
{
    // Declarando os pinos
    pinMode(button, INPUT);
    pinMode(led, OUTPUT);
}

void loop()
{
    bool buttonStatus = digitalRead(button);
    if (buttonStatus == true) {
        // Liga o led
        digitalWrite(led, 1);
    } else {
        // Desliga o led
        digitalWrite(led, 0);
    }
}