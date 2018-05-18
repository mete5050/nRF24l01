//Alıcı
#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
int msg[4];
RF24 radio(9,10);
const uint64_t pipe = 0xE8E8F0F0E1LL;

void setup() {
Serial.begin(9600);
radio.begin();
radio.openReadingPipe(1,pipe);
radio.startListening();
}

void loop() {
if (radio.available()){
  radio.read(msg, 1); 
  Serial.print("  -  ");
  Serial.print(msg[0]);
  Serial.print("  -  ");
  Serial.print(msg[1]);
  Serial.print("  -  ");
  Serial.print(msg[2]);
  Serial.print("  -  ");
  Serial.print(msg[3]);
}
}
