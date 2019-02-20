//kolo sensor maxbot.
//Author: Eduardo Gante.
// Date: 23/07/09
// pin 11 entrada  
// pin 9 salida


const int pwPin = 11;
const int ledPIN = 9;

long pulse, inches, cm;

void setup()

{


  Serial.begin(9600);

}

void loop()

{

 pinMode(pwPin, INPUT);
 pinMode(ledPIN , OUTPUT); 


  pulse = pulseIn(pwPin, HIGH);

  //147uS per inch



  

  inches = pulse / 147;

  //change inches to centimetres

  cm = inches * 2.54;

if (cm < 90){

  digitalWrite(ledPIN , HIGH);

  
  Serial.print(cm);

  Serial.print("cm");

  Serial.println();

}
else
{
  digitalWrite(ledPIN , LOW);
  }


  delay(500);

}
