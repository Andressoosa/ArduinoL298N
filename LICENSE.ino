int IN3 = 5;
int IN4 = 4;

void setup()
{
pinMode (IN4, OUTPUT); // Input4 conectada al pin 4
pinMode (IN3, OUTPUT); // Input3 conectada al pin 5
}
void loop()
{
// Motor gira en un sentido
digitalWrite (IN4, HIGH);
digitalWrite (IN3, LOW);
delay(4000);
// Motor no gira
digitalWrite (IN4, LOW);
delay(500);

digitalWrite (IN3, HIGH);
delay(4000);
// Motor no gira
digitalWrite (IN3, LOW);
delay(5000);
}


int IN3 = 5; // Input3 conectada al pin 5
int IN4 = 4; // Input4 conectada al pin 4
int ENB = 3; // ENB conectada al pin 3 de Arduino
void setup()
{
pinMode (ENB, OUTPUT);
pinMode (IN3, OUTPUT);
pinMode (IN4, OUTPUT);
}
void loop()
{
//Prepara la salida para que el motor gire en un sentido
digitalWrite (IN3, HIGH);
digitalWrite (IN4, LOW);
// Aplica PWM al pin ENB, haciendo girar el motor, cada 2 seg aumenta la velocidad
analogWrite(ENB,55);
delay(2000);
analogWrite(ENB,105);
delay(2000);
analogWrite(ENB,255);
delay(2000);
// Apaga el motor y espera 5 seg
analogWrite(ENB,0);
delay(5000);
}
