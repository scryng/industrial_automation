// C++ code

// 05- Os leds devem ir ligando e desligando continuamente em sequência:
// Ex: Liga led 1, desliga led 1, liga led 2, desliga led 2, liga led 3, desliga led 3, … Loop O tempo inicia em 5s e termina em 5ms (descendo 20% a cada loop).

// https://www.tinkercad.com/things/6rpwhOYlqjk-l2ex02

// Setup

int led=0;
int time=0;

void setup(){
	for (int i=3;i<=5;i++){
		pinMode(i, OUTPUT);
	}
}

// Loop
void loop() {
    logic();
}

//Functions

void logic() {
    float time = 5000; // Inicia com 5ms
    for (float i = time; i >= 5; i -= i * 0.15) { // Incrementa o tempo em 15% a cada iteração
        for (int led = 3; led <= 5; led++) {
            digitalWrite(led, 1); // Liga o LED
            delay(time);
            digitalWrite(led, 0); // Desliga o LED
            delay(time);
        }
    }
}