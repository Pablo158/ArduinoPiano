#include <SoftwareSerial.h> // libreria que permite establecer pines digitales
int pinBuzzer = 8; //bocina
SoftwareSerial miBT(4, 5);  // pin 10 como RX, pin 11 como TX

char DATO = 0;      // variable para almacenar caracter recibido
int bocina = 8;    

void setup(){
  Serial.begin(115200);
  miBT.begin(38400);    // comunicacion serie entre Arduino y el modulo a 38400 bps
  pinMode(bocina, OUTPUT); // pin 2 como salida
}

void loop(){
  if (miBT.available()){      // si hay informacion disponible desde modulo
  DATO = miBT.read();   // almacena en DATO el caracter recibido desde modulo

  if( DATO == '1' )   // si el caracter recibido es el numero 1
   tone (pinBuzzer, 262, 100);  // Toca la nota "DO"
   
  if( DATO == '2' )   // si el caracter recibido es el numero 2
   tone (pinBuzzer, 294, 100);   // Toca la nota "RE"

  if( DATO == '3' )   // si el caracter recibido es el numero 3
   tone (pinBuzzer, 330, 100);  // Toca la nota "MI"

  if( DATO == '4' )   // si el caracter recibido es el numero 4
    tone (pinBuzzer, 349, 100);   // Toca la nota "FA"

  if( DATO == '5' )   // si el caracter recibido es el numero 5
   tone (pinBuzzer, 392, 100);  // Toca la nota "SOL"

  if( DATO == '6' )   // si el caracter recibido es el numero 6
    tone (pinBuzzer, 440, 100);   // Toca la nota "LA"

  if( DATO == '7' )   // si el caracter recibido es el numero 7
    tone (pinBuzzer, 494, 100);   // Toca la nota "SI"

  if( DATO == '8' )   // si el caracter recibido es el numero 8
    tone (pinBuzzer, 277, 100);  // Toca la nota "DO#"

  if( DATO == '9' )   // si el caracter recibido es el numero 9
    tone (pinBuzzer, 311, 100);   // Toca la nota "RE#"

  if( DATO == '10' )   // si el caracter recibido es el numero 10
    tone (pinBuzzer, 370, 100);   // Toca la nota "FA#"

  if( DATO == '11' )   // si el caracter recibido es el numero 11
    tone (pinBuzzer, 415, 100);   // Toca la nota "SOL#"

  if( DATO == '12' )   // si el caracter recibido es el numero 12
    tone (pinBuzzer, 466, 100);   // Toca la nota "LA#"

 
 }
}
