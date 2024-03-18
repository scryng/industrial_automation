// C++ code

// Exercício:
// Criar um contador que vai do zero ao nove e depois do nove ao zero com um clique do botão.

// Variables

int button = 2;

int a = 3;
int b = 4;
int c = 5;
int d = 6;
int e = 7;
int f = 8;
int g = 9;

int control = 0;
int increment = 0;

void setup(){
    pinMode(button, INPUT);
	for (control=3;control<=9;control++){
		pinMode(control, OUTPUT);
	}
}

void loop() {
    bool buttonStatus = digitalRead(button);

    if (buttonStatus == true){
        flashNumber();
    }
}

//Functions

void flashNumber(){
    int cd = 500;
    for (int number=9;number>=0;number--){
        switch(number)
        {
        case 0:
            for (int i=3;i<=8;i++){
                digitalWrite(i, 1);
            }
            digitalWrite(g, 0);
            delay(cd);
            break;
        case 1:
            for (int i=3;i<=9;i++){
                if (i==b || i==c){
                    digitalWrite(i, 1);
                } else {
                    digitalWrite(i, 0);
                }
            }
            delay(cd);
            break;
        case 2:
            for (int i=3;i<=9;i++){
                if (i==a || i==b || i==d || i==e || i==g){
                    digitalWrite(i, 1);
                } else {
                    digitalWrite(i, 0);
                }
            }
            delay(cd);
            break;
        case 3:
            for (int i=3;i<=9;i++){
                if (i==f || i==e){
                    digitalWrite(i, 0);
                } else {
                    digitalWrite(i, 1);
                }
            }
            delay(cd);
            break;
        case 4:
            for (int i=3;i<=9;i++){
                if (i==b || i==c || i==f || i==g){
                    digitalWrite(i, 1);
                } else {
                    digitalWrite(i, 0);
                }
            }
            delay(cd);
            break;
        case 5:
            for (int i=3;i<=9;i++){
                if (i==b || i==e){
                    digitalWrite(i, 0);
                } else {
                    digitalWrite(i, 1);
                }
            }
            delay(cd);
            break;
        case 6:
            for (int i=3;i<=9;i++){
                if (i==b){
                    digitalWrite(i, 0);
                } else {
                    digitalWrite(i, 1);
                }
            }
            delay(cd);
            break;
        case 7:
            for (int i=3;i<=9;i++){
                if (i==a || i==b || i==c){
                    digitalWrite(i, 1);
                } else {
                    digitalWrite(i, 0);
                }
            }
            delay(cd);
            break;
        case 8:
            for (int i=3;i<=9;i++){
                digitalWrite(i, 1);
            }
            delay(cd);
            break;
        case 9:
            for (int i=3;i<=9;i++){
                if (i==e || i==d){
                    digitalWrite(i, 0);
                } else {
                    digitalWrite(i, 1);
                }
            }
            delay(cd);
            break;
        default:
            for (int i=3;i<=9;i++){
               digitalWrite(i, 0);
            }
            delay(cd);
            break;
        }
    }
}