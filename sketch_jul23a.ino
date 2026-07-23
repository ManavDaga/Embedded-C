#include <Arduino.h>

#include "led.h"
#include "sensor.h"
#include "statistic.h"

const int LED2 = 2;

void setup()
{
    Serial.begin(115200);

    pinMode(LED2, OUTPUT);

    sensorInit();

    statisticsInit();
}

void loop()
{
    digitalWrite(LED2, HIGH);
    delay(500);

    digitalWrite(LED2, LOW);
    delay(500);

    blinkLed();

    readSensor();

    delay(5000);
}