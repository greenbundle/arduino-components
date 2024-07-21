#ifndef SWITCHBUTTON_H
#define SWITCHBUTTON_H

#include <Arduino.h>
#include "commons/DigitalInputPin.h"

enum class ResistancePull {
    Down_Ext,
    Up_Ext,
    Up_Int,
};

class SwitchButton {
    private:
        DigitalInputPin* digitalInputPin;
        ResistancePull pullMode;
        boolean state;
        boolean holdMode;
    public:
        SwitchButton(String, uint8_t);
        SwitchButton(String, uint8_t, ResistancePull);
        void begin();
        void init();
        boolean getState();
        void setHoldMode(boolean);
};

#endif