#include <Arduino.h>
#include "led.h"

const int LED15 = 15;

void blinkLed()
{
    digitalWrite(LED15, HIGH);
    delay(500);

    digitalWrite(LED15, LOW);
    delay(500);

    digitalWrite(LED15, HIGH);
}