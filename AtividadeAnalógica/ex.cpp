// C++ code

// Fazer um algorítmo que execute a seguinte lógica:
// Função de respirar. Tempo de processo. 0% ao 100% Depois 100% ao 0%

// Parte 2: O potenciômetro, vai controlar o tempo de respiração Se tiver zero, fica desligado Se tiver máximo, demora 4s para respirar. O sistema vai respirando rápido ou devagar de acordo com o sinal do potenciômetro.

// Ex: 1s para respirar; Ascende de 0-100% em 0,5s; Apaga de 100% a 0% em 0,5s

// Setup
int pot = A0;
int led = 3;

void setup() {
    pinMode(pot, INPUT);
    pinMode(led, OUTPUT);
}

// Loop
void loop() {
    breathing();
}

//Functions
void breathing(){
    int potPotence = analogRead(pot); // Lê o valor do potenciômetro
    int breathingTime = map(potPotence, 0, 1023, 1000, 4000); // Mapeia o valor do potenciômetro para o tempo de respiração entre 1s e 4s
    int fadeTime = breathingTime / 2; // Divide o tempo de respiração ao meio para cada fase (ascendente e descendente)

    // Ascendente (0% a 100%)
    for (int brightness = 0; brightness <= 255; brightness++) {
        analogWrite(led, brightness); // Define o brilho do LED
        delay(fadeTime / 255); // Calcula o atraso com base no tempo de respiração e na escala de brilho (0 a 255)
    }

    // Descendente (100% a 0%)
    for (int brightness = 255; brightness >= 0; brightness--) {
        analogWrite(led, brightness); // Define o brilho do LED
        delay(fadeTime / 255); // Calcula o atraso com base no tempo de respiração e na escala de brilho (0 a 255)
    }
}
