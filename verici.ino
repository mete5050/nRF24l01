#include <SPI.h>
#include "nRF24L01.h"
#include "RF24.h"
int msg[4];
RF24 radio(9,10);
const uint64_t pipe = 0xE8E8F0F0E1LL;
void setup() {
radio.begin(); 
radio.openWritingPipe(pipe);} 
}

void loop() {
msg[0] = 100;
msg[1] = 200;
msg[2] = 130;
msg[3] = 500;
radio.write(msg, 1);
}
