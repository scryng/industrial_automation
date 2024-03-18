// C++ code

// Exercício:
// Semáforo simples:
// Conecte três LEDs a pinos digitais para representar um semáforo.
// Escreva um programa que faça o semáforo seguir o padrão de funcionamento real (verde, amarelo, vermelho).
// https://www.tinkercad.com/things/6rpwhOYlqjk-l2ex02

// Variables

int red = 3;
int yellow = 4;
int green = 5;

// Setup

void setup(){
	// Settings the pins

	for (int i=3;i<=5;i++){
		pinMode(i, OUTPUT);
	}

	// Flash yellow 3x

	for (int i=1;i<=3;i++){
		colorControl(yellow, 1000, false);
	}

	// colorControl(yellow, 1000, false);
	// colorControl(yellow, 1000, false);
	// colorControl(yellow, 1000, false);
}

// Loop

void loop() {

	// Light up red
	colorControl(red, 5000, true);

	// Light up green
	colorControl(green, 5000, true);

	// Light up yellow
	colorControl(yellow, 3000, true);
}

// Functions

int colorControl (int color, int time, bool status) {

	// Logic for using the color control function both in setup and in the loop
	
	digitalWrite(color, 1);
	delay(time);
	digitalWrite(color, 0);

	if(status == false){
		delay(time);
		return 0;
	}
	else{
		return 1;
	}
}