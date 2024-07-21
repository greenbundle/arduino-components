#ifndef LIGHTDEPENDENRESISTOR_H
#define LIGHTDEPENDENRESISTOR_H

#include <Arduino.h>
#include "commons/AnalogInputPin.h"

class LighDependentResistor {
    private:
        AnalogInputPin* analogInputPin;
        int value;
    public:
        LighDependentResistor(String, uint8_t);
        void init();
        void begin();
        int getValue();
};

#endif