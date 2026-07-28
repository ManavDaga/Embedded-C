#include <statistic.h>

// Reading Counter
unsigned long readingCount = 0;

// Temperature
float maxTemperature;
float minTemperature;
float totalTemperature;

// Humidity
float maxHumidity;
float minHumidity;
float totalHumidity;

// CO2
uint16_t maxCO2;
uint16_t minCO2;
unsigned long totalCO2;

void statisticsInit()
{
    readingCount = 0;

    totalTemperature = 0;
    totalHumidity = 0;
    totalCO2 = 0;

    maxTemperature = -1000;
    minTemperature = 1000;

    maxHumidity = -1000;
    minHumidity = 1000;

    maxCO2 = 0;
    minCO2 = 65535;
}

void updateStatistics(
    float temperature,
    float humidity,
    uint16_t co2)
{
    readingCount++;

    // Temperature
    if (temperature > maxTemperature)
        maxTemperature = temperature;

    if (temperature < minTemperature)
        minTemperature = temperature;

    totalTemperature += temperature;

    // Humidity
    if (humidity > maxHumidity)
        maxHumidity = humidity;

    if (humidity < minHumidity)
        minHumidity = humidity;

    totalHumidity += humidity;

    // CO2
    if (co2 > maxCO2)
        maxCO2 = co2;

    if (co2 < minCO2)
        minCO2 = co2;

    totalCO2 += co2;
}

void printStatistics()
{
    Serial.println();
    Serial.println("========== SENSOR STATISTICS ==========");

    Serial.print("Readings : ");
    Serial.println(readingCount);

    Serial.println();

    Serial.println("Temperature");
    Serial.print("Average : ");
    Serial.println(totalTemperature / readingCount);

    Serial.print("Maximum : ");
    Serial.println(maxTemperature);

    Serial.print("Minimum : ");
    Serial.println(minTemperature);

    Serial.println();

    Serial.println("Humidity");
    Serial.print("Average : ");
    Serial.println(totalHumidity / readingCount);

    Serial.print("Maximum : ");
    Serial.println(maxHumidity);

    Serial.print("Minimum : ");
    Serial.println(minHumidity);

    Serial.println();

    Serial.println("CO2");
    Serial.print("Average : ");
    Serial.println((float)totalCO2 / readingCount);

    Serial.print("Maximum : ");
    Serial.println(maxCO2);

    Serial.print("Minimum : ");
    Serial.println(minCO2);

    Serial.println("=======================================");
}