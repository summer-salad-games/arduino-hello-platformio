#include <Arduino.h>
#include "Button.hpp"
#include "Led.hpp"
#include "Controller.hpp"

constexpr uint8_t BUTTON_PIN = 7;
constexpr uint8_t LED_PIN = 13;

Button button(BUTTON_PIN);
Led led(LED_PIN);
Controller controller(button, led);

void setup()
{
    Serial.begin(9600);
    while (!Serial);
    controller.begin();
}

void loop()
{
    controller.update();
    delay(50);
}
