#include <Arduino.h>
#include <Wire.h>
#include <SensirionI2cScd4x.h>

#include "sensor.h"
#include "statistic.h"

SensirionI2cScd4x scd4x;

void sensorInit()
{
    Wire.begin();

    scd4x.begin(Wire, 0x62);

    scd4x.startPeriodicMeasurement();

    Serial.println("Sensor Started");
}

void readSensor()
{
    bool dataReady = false;

    scd4x.getDataReadyStatus(dataReady);

    if (dataReady)
    {
        uint16_t co2;
        float temperature;
        float humidity;

        scd4x.readMeasurement(
            co2,
            temperature,
            humidity
        );

        Serial.println();

        Serial.println("Current Reading");

        Serial.print("Temperature : ");
        Serial.print(temperature);
        Serial.println(" °C");

        Serial.print("Humidity    : ");
        Serial.print(humidity);
        Serial.println(" %");

        Serial.print("CO2         : ");
        Serial.print(co2);
        Serial.println(" ppm");

        updateStatistics(
            temperature,
            humidity,
            co2
        );

        printStatistics();
    }
}