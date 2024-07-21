#include "AnalogInputPin.h"

AnalogInputPin::AnalogInputPin(String id, uint8_t pin) {
    this -> pin = new Pin(id, pin, INPUT);
}

int AnalogInputPin::read() {
    if(this -> initialized) {
        return analogRead(this -> pin -> getPin());
    } else {
        Serial.print("PinException: Pin is not initialized\n");
    }
}

Pin* AnalogInputPin::getPin() {
    return this -> pin;
}

void AnalogInputPin::init() {
    this -> pin -> init();
    this -> initialized = true;
}