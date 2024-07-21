#include "DigitalInputPin.h"

DigitalInputPin::DigitalInputPin(String id, uint8_t pin) {
    this -> pin = new Pin(id, pin, INPUT);
}

DigitalInputPin::DigitalInputPin(String id, uint8_t pin, InputPull pullMode) {
    if(pullMode == InputPull::None) this -> pin = new Pin(id, pin, INPUT);
    else if(pullMode == InputPull::Up) this -> pin = new Pin(id, pin, INPUT_PULLUP);
    else if(pullMode == InputPull::Down) {
			//NOT SUPPORTED
	}
}

int DigitalInputPin::read() {
    if(this -> initialized) {
        return digitalRead(this -> pin -> getPin());
    } else {
        Serial.print("PinException: Pin is not initialized\n");
    }
}

Pin* DigitalInputPin::getPin() {
    return this -> pin;
}

void DigitalInputPin::init() {
    this -> pin -> init();
    this -> initialized = true;
}