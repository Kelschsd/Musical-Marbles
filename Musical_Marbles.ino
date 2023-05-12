/*
  Musical Marbles
  Created by Samuel Kelsch for ECE 484 Final Individual Project


  Melody code sourced from:
  https://www.arduino.cc/en/Tutorial/Tone
  created 21 Jan 2010
  modified 30 Aug 2011
  by Tom Igoe

*/


#include "pitches.h"

void setup() {
  Serial.begin(9600);
  tone(8, NOTE_C6, 50);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  double voltage = sensorValue * (5.0 / 1023.0);

  int voltageInt = voltage * 100;
  if ((voltageInt < 493) && (voltageInt > 379 )){
    int vAvg = 0;
    for (int i = 0; i < 5; i++){
      vAvg = vAvg + voltageInt;
      Serial.print("vAvgt: ");
      Serial.println(vAvg);
    }
    vAvg = vAvg / 5;
    voltageInt = vAvg;
    
  }
  Serial.print("voltageInt: ");
  Serial.println(voltageInt);

  if ((voltageInt>=(488-5)) && (voltageInt<=(488+5))) {
    tone(8, NOTE_C6, 200);
  } else if ((voltageInt>=(470-5)) && (voltageInt<=(470+5))) {
    tone(8, NOTE_CS6, 200);
  } else if ((voltageInt>=(463-5)) && (voltageInt<=(463+5))) {
    tone(8, NOTE_D6, 200);
  } else if ((voltageInt>=(453-5)) && (voltageInt<=(453+5))) {
    tone(8, NOTE_DS6, 200);
  } else if ((voltageInt>=(442-5)) && (voltageInt<=(442+5))) {
    tone(8, NOTE_E6, 200);
  } else if ((voltageInt>=(433-5)) && (voltageInt<=(433+5))) {
    tone(8, NOTE_F6, 200);
  } else if ((voltageInt>=(419-5)) && (voltageInt<=(419+5))) {
    tone(8, NOTE_FS6, 200);
  } else if ((voltageInt>=(412-5)) && (voltageInt<=(412+5))) {
    tone(8, NOTE_G6, 200);
  } else if ((voltageInt>=(406-5)) && (voltageInt<=(406+3))) {
    tone(8, NOTE_GS6, 200);
  } else if ((voltageInt>=(397-3)) && (voltageInt<=(397+3))) {
    tone(8, NOTE_A6, 200);
  } else if ((voltageInt>=(390-3)) && (voltageInt<=(390+3))) {
    tone(8, NOTE_AS6, 200);
  } else if ((voltageInt>=(382-3)) && (voltageInt<=(382+3))) {
    tone(8, NOTE_B6, 200);
  }

}







