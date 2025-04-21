#ifndef LED_HPP
#define LED_HPP

#include <Arduino.h>

class Led
{
public:
    Led(uint8_t pin);
    void begin();
    void turnOn();
    void turnOff();

private:
    uint8_t ledPin;
};

#endif
