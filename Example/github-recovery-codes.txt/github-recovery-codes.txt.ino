#define RGB_GREEN 3
#define RGB_BLUE 5
#define RGB_RED 6
#define espera 300

void setup() {
  // put your setup code here, to run once:
pinMode (RGB_RED, OUTPUT);
pinMode (RGB_GREEN, OUTPUT);
pinMode (RGB_BLUE, OUTPUT);
}


void loop() {
// put your main code here, to run repeatedly:
// Verde
digitalWrite(RGB_GREEN, HIGH); 
digitalWrite(RGB_BLUE, LOW); 
digitalWrite(RGB_RED, LOW); 
delay (espera); 
// Azul
digitalWrite(RGB_GREEN, LOW); 
digitalWrite(RGB_BLUE, HIGH); 
digitalWrite(RGB_RED, LOW); 
delay (espera); 
// Rojo
digitalWrite(RGB_GREEN, LOW); 
digitalWrite(RGB_BLUE, LOW); 
digitalWrite(RGB_RED, HIGH); 
delay(espera); 
// Morado (rojo y verde)
analogWrite(RGB_RED, HIGH);
analogWrite(RGB_GREEN, HIGH);
analogWrite(RGB_BLUE, LOW);
delay(espera);
// Morado (rojo y verde)
analogWrite(RGB_RED, HIGH);
analogWrite(RGB_GREEN, HIGH);
analogWrite(RGB_BLUE, LOW);
delay(espera);
// Morado (azul y verde)
analogWrite(RGB_RED, LOW);

analogWrite(RGB_GREEN, HIGH);
analogWrite(RGB_BLUE, HIGH);
delay(espera);
}