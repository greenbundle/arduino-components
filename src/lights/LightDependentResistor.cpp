#include "lights/LightDependentResistor.h"

LighDependentResistor::LighDependentResistor(String id, uint8_t pin) {
    this -> analogInputPin = new AnalogInputPin(id, pin);
}

void LighDependentResistor::init() {
    this -> analogInputPin -> init();
}

void LighDependentResistor::begin() {
    this -> value = this -> analogInputPin -> read();
}

int LighDependentResistor::getValue() {
    return this -> value;
}