#ifndef ANALOGINPUTPIN_H
#define ANALOGINPUTPIN_H

#include "Pin.h"

class AnalogInputPin {
    private:
        Pin* pin;
        boolean initialized;
    public:
        AnalogInputPin(String, uint8_t);
        int read();
        Pin* getPin();
        void init();
};

#endif