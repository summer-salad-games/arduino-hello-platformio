#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "Button.hpp"
#include "Led.hpp"

class Controller
{
public:
    Controller(Button &button, Led &led);
    void begin();
    void update();

private:
    enum State
    {
        OFF,
        ON
    };
    State state;

    Button &button;
    Led &led;
};

#endif
