/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);    //start serial communication @9600 bps
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever


void loop(){
  
  if(Serial.available()){  //id data is available to read

    char val = Serial.read();

    if(val == 'l'){       //if r received
      digitalWrite(LED_BUILTIN, HIGH);//turn on red led
      }
    if(val == 'n'){       //if b received
      for(int i=1; i <= 10 ;i++){

        digitalWrite(LED_BUILTIN, HIGH);
        delay(500);
        digitalWrite(LED_BUILTIN, LOW);
        delay(500);
        }
      digitalWrite(LED_BUILTIN, HIGH);//turn on red led

      }
    if(val == 'f'){       //if y received
      for(int i=1; i <= 50 ;i++){

        digitalWrite(LED_BUILTIN, HIGH);
        delay(20);
        digitalWrite(LED_BUILTIN, LOW);
        delay(50);
        } 
      digitalWrite(LED_BUILTIN, HIGH);//turn on yellow led
      }
    if(val == 's'){       //if f received
      digitalWrite(LED_BUILTIN, LOW); //turn off all led
      }      
    }
  }
  
