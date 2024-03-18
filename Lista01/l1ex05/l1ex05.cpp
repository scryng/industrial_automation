// C++ code

// Exercício:

// Variables

int led = 3;

void setup(){
    pinMode(led, OUTPUT);
}

void loop() {
    int proportion = 256/100;

    for(int i=0;i<=100;i++){
        analogWrite(led, i*proportion);
        delay(100);
    }
    delay(500);
    for(int j=100;j<=0;j--){
        analogWrite(led, j*proportion);
        delay(100);
    }
}