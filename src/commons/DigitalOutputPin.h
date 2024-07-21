#ifndef DIGITALOUTPUTPIN_H
#define DIGITALOUTPUTPIN_H

#include "Pin.h"

class DigitalOutputPin {
    private:
        Pin* pin;
        boolean initialized;
    public:
        DigitalOutputPin(String, uint8_t);
        void write(uint8_t);
        Pin* getPin();
        void init();
};

#endif