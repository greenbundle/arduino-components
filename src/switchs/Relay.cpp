#include "switchs/Relay.h"

Relay::Relay(String id, uint8_t pin) {
    this -> digitalOutputPin = new DigitalOutputPin(id, pin);
}

void Relay::init() {
    this -> digitalOutputPin -> init();
}

void Relay::activate(boolean activated) {
    if(activated) {
        this -> digitalOutputPin -> write(HIGH);
    } else {
        this -> digitalOutputPin -> write(LOW);
    }
}