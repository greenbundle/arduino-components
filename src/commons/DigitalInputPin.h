#ifndef DIGITALINPUTPIN_H
#define DIGITALINPUTPIN_H

#include "Pin.h"

    class DigitalInputPin {
    private:
        Pin* pin;
        boolean initialized;
    public:
        DigitalInputPin(String, uint8_t);
        DigitalInputPin(String, uint8_t, InputPull);
        int read();
        Pin* getPin();
        void init();
};

#endif