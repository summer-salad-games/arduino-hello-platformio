#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <Arduino.h>

class Button
{
public:
    Button(uint8_t pin);
    void begin();
    bool isPressed();

private:
    uint8_t buttonPin;
};

#endif
