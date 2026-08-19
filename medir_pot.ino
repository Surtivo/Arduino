// C++ code
// Leitura do potenciômetro

int pot_val; //vari´ avel que guardar´ a o valor do potenciˆ ometro

void setup()
{
	Serial.begin(9600); //inicia a comunicac¸˜ ao serial do Arduino em 9600 bps
}

void loop()
{
	pot_val = analogRead(0); //use analogRead para ler o canal 0 anal´ ogico
	Serial.println(pot_val); //imprime na sa´ıda serial o valor do potenciˆ ometro
  	delay(200);
}