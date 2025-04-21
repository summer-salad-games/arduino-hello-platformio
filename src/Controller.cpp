#include "Controller.hpp"

Controller::Controller(Button &b, Led &l)
    : button(b), led(l), state(OFF) {}

void Controller::begin()
{
    button.begin();
    led.begin();
    Serial.println("Controller initialized.");
}

void Controller::update()
{
    switch (state)
    {
    case OFF:
        if (button.isPressed())
        {
            Serial.println("Button pressed - turning LED ON");
            led.turnOn();
            state = ON;
        }
        break;
    case ON:
        if (!button.isPressed())
        {
            Serial.println("Button released - turning LED OFF");
            led.turnOff();
            state = OFF;
        }
        break;
    }
}
