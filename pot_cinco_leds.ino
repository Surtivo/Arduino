// Código para controlar 5 LEDs com um potenciômetro usando PWM no Arduino Uno

int pot_val;

// Pinos PWM no Arduino Uno: 3, 5, 6, 9, 10
int pwm_pin1 = 3;
int pwm_pin2 = 5;
int pwm_pin3 = 6;
int pwm_pin4 = 9;
int pwm_pin5 = 10;
int pwm_value;

void setup(){
  pinMode(pwm_pin1, OUTPUT);
  pinMode(pwm_pin2, OUTPUT);
  pinMode(pwm_pin3, OUTPUT);
  pinMode(pwm_pin4, OUTPUT);
  pinMode(pwm_pin5, OUTPUT);
}

void loop(){
  pot_val = analogRead(A0);
  pwm_value = map(pot_val, 0, 1023, 0, 255); // Usando map para mapear a faixa corretamente

  // Liga/desliga cada pino de acordo com o valor do potenciômetro
  analogWrite(pwm_pin1, (pot_val > 0)    ? pwm_value : 0);
  analogWrite(pwm_pin2, (pot_val > 200)  ? pwm_value : 0);
  analogWrite(pwm_pin3, (pot_val > 400)  ? pwm_value : 0);
  analogWrite(pwm_pin4, (pot_val > 600)  ? pwm_value : 0);
  analogWrite(pwm_pin5, (pot_val > 800)  ? pwm_value : 0);
}