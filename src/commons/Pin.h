#ifndef PIN_H
#define PIN_H

#include <Arduino.h>

class Pin
{
  private:
    String id;
    uint8_t pin;
    uint8_t mode;

  public:
    Pin(String, uint8_t, uint8_t);

    String getId();
    uint8_t getPin();
    uint8_t getMode();

    void setId(String);
    void setMode(uint8_t);
    void setPin(uint8_t);

    void init();
};

enum class InputPull
{
    None,
    Up,
    Down,
};

#endif