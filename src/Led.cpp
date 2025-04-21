#include "Led.hpp"

Led::Led(uint8_t pin) : ledPin(pin) {}

void Led::begin()
{
    pinMode(ledPin, OUTPUT);
    digitalWrite(ledPin, LOW);
}

void Led::turnOn()
{
    digitalWrite(ledPin, HIGH);
}

void Led::turnOff()
{
    digitalWrite(ledPin, LOW);
}
