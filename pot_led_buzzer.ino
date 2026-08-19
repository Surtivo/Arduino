// Exemplo de c´ odigo- entrada anal´ ogica- sa´ıda pwm
// Leitura do potencionmetro e controle de brilho de um led

int pot_val;
int pwm_pin = 3;
int pwm_value;

void setup(){
	pinMode(pwm_pin, OUTPUT);
}

void loop(){
	pot_val = analogRead(0);
  	pwm_value = pot_val / 4; // pot_val max = 1023 / 4 = 255
  	if (pwm_value > 255){
  		pwm_value = 255;
    }
  	else if (pwm_value < 0){
  		pwm_value = 0;
    }
  	analogWrite(pwm_pin, pwm_value);
}