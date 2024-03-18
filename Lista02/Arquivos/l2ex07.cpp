// C++ code

// 07- Somar cliques de um botão, e o led pisca em um intervalo de 1s a quantidade de vezes em que
// Foi clicada.
// Ex: Cliquei uma vez, o led pisca 1x a cada 1s
//     Cliquei duas vezes, o led pisca 2x a cada 1s
//     Cliquei cinco vezes, o led pisca 5x a cada 1s
// https://www.tinkercad.com/things/6rpwhOYlqjk-l2ex02

// Setup
int button = 2;
int buttonclicked = 0;
int led = 3;

void setup() {
    pinMode(button, INPUT);
    pinMode(led, OUTPUT);
    
    // Verifica se o botão está pressionado no momento do setup
    bool buttonStatus = digitalRead(button);
    
    // Se o botão está pressionado, incrementa o contador de cliques
    if (buttonStatus == true) {
        buttonclicked++;
        delay(200); // Aguarda um breve momento para evitar leituras múltiplas do botão
    }
}

// Loop
void loop() {
    // Piscar o LED de acordo com o número de cliques acumulados
    for (int i = 0; i < buttonclicked; i++) {
        digitalWrite(led, HIGH); // Liga o LED
        delay(1000); // Piscar o LED
        digitalWrite(led, LOW); // Desliga o LED
        delay(1000); // Intervalo entre piscadas
    }
}
