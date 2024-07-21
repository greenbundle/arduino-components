#ifndef RELAY_H
#define RELAY_H

#include "commons/DigitalOutputPin.h"

class Relay {
    private:
        DigitalOutputPin* digitalOutputPin;
    public:
        Relay(String, uint8_t);
        void init();
        void activate(boolean);
};

#endif