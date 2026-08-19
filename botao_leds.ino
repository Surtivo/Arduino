// C++ code
// Clicar no botão para ligar e desligar os leds

#define PIN13 13
#define PIN12 12
#define PIN2 2

int state = 1;
int buton = PIN2;

void setup()
{
  pinMode(PIN13, OUTPUT);
  pinMode(PIN12, OUTPUT);
  pinMode(buton, INPUT);
}

void loop()
{
  if (digitalRead(buton) == HIGH)
	state = !state;
    if (state == 1){
		digitalWrite(PIN12, HIGH);
    	digitalWrite(PIN13, HIGH);
      	delay(5);
    }else{
		digitalWrite(PIN12, LOW);
    	digitalWrite(PIN13, LOW);
      	delay(5);
    }
}