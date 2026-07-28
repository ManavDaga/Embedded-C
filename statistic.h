#ifndef STATISTICS_H
#define STATISTICS_H

#include <Arduino.h>

void statisticsInit();

void updateStatistics(
    float temperature,
    float humidity,
    uint16_t co2
);

void printStatistics();

#endif