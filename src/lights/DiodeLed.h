#ifndef DIODELED_H
#define DIODELED_H

#include <Arduino.h>
#include "commons/DigitalOutputPin.h"

class DiodeLed {
    private:
        DigitalOutputPin* digitalOutputPin;
        uint8_t state;
    public:
        DiodeLed(String, uint8_t);
        DiodeLed(String, uint8_t, uint8_t);
        void init();
        void on();
        void off();
        void toggle();
};

#endif