#include "buttons/SwitchButton.h"

SwitchButton::SwitchButton(String id, uint8_t pin) {
    this -> pullMode = ResistancePull::Down_Ext;
    this -> digitalInputPin = new DigitalInputPin(id, pin, InputPull::None);
};

SwitchButton::SwitchButton(String id, uint8_t pin, ResistancePull pullMode) {
    this -> pullMode = pullMode;
    if(pullMode == ResistancePull::Up_Ext) this -> digitalInputPin = new DigitalInputPin(id, pin, InputPull::None);
    else if(pullMode == ResistancePull::Down_Ext) this -> digitalInputPin = new DigitalInputPin(id, pin, InputPull::None);
    else if(pullMode == ResistancePull::Up_Int) this -> digitalInputPin = new DigitalInputPin(id, pin, InputPull::Up);
};

void SwitchButton::init() {
    this -> digitalInputPin -> init();
};

void SwitchButton::setHoldMode(boolean holdMode) {
    this -> holdMode = holdMode;
};

boolean SwitchButton::getState() {
    return this -> state;
};

void SwitchButton::begin() {
    int status = this -> digitalInputPin -> read();

    if(this -> holdMode) {
        if(this -> pullMode == ResistancePull::Down_Ext) {
            if(status) {
                boolean lastState = 1 - this -> state;
                this -> state = lastState;
            }
        } else {
            if(status) {
                boolean lastState = 1 - this -> state;
                this -> state = !lastState;
            }
        }
    } else {
        if(this -> pullMode == ResistancePull::Down_Ext) {
            this -> state = status;
        } else {
            this -> state = !status;
        }
    }
}
