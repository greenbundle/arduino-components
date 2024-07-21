#include "Pin.h"

Pin::Pin(String id, uint8_t pin, uint8_t mode)
{
    this->id = id;
    this->pin = pin;
    this->mode = mode;
}

String Pin::getId()
{
    return this->id;
}

uint8_t Pin::getPin()
{
    return this->pin;
}

uint8_t Pin::getMode()
{
    return this->mode;
}

void Pin::setId(String id)
{
    this->id = id;
}

void Pin::setPin(uint8_t pin)
{
    this->pin = pin;
}

void Pin::setMode(uint8_t mode)
{
    this->mode = mode;
}

void Pin::init()
{
    pinMode(this->pin, this->mode);
}