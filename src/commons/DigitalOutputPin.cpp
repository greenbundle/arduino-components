#include "DigitalOutputPin.h"

DigitalOutputPin::DigitalOutputPin(String id, uint8_t pin) {
    this -> pin = new Pin(id, pin, OUTPUT);
}

void DigitalOutputPin::write(uint8_t val) {
    if(this -> initialized) {
        digitalWrite(this -> pin -> getPin(), val);
    } else {
        Serial.print("PinException: Pin is not initialized\n");
    }
}

Pin* DigitalOutputPin::getPin() {
    return this -> pin;
}

void DigitalOutputPin::init() {
    this -> pin -> init();
    this -> initialized = true;
}