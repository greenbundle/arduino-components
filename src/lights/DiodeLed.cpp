#include "lights/DiodeLed.h"

DiodeLed::DiodeLed(String id, uint8_t pin) {
    this -> digitalOutputPin = new DigitalOutputPin(id, pin);
    this -> state = LOW;
    this -> digitalOutputPin -> write(this -> state);
}

DiodeLed::DiodeLed(String id, uint8_t pin, uint8_t initialState) {
    this -> digitalOutputPin = new DigitalOutputPin(id, pin);

    if(initialState == HIGH) {
        this -> state = initialState;
        this -> digitalOutputPin -> write(this -> state);
    } else {
        this -> state = LOW;
        this -> digitalOutputPin -> write(this -> state);
    }
}

void DiodeLed::init() {
    this -> digitalOutputPin -> init();
}

void DiodeLed::on() {
    this -> state = HIGH;
    this -> digitalOutputPin -> write(this -> state);
}

void DiodeLed::off() {
    this -> state = LOW;
    this -> digitalOutputPin -> write(this -> state);
}

void DiodeLed::toggle() {
    this -> state = !state;
    this -> digitalOutputPin -> write(this -> state);
}