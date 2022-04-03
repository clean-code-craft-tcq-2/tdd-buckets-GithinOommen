#ifndef ADC_H
#define ADC_H
#include <stdio.h>
int DynamicRange(int resolution);
int* GetADCValue(int *InputSensorValue, int *ActualADCValue ,int size, int resolution);
#endif
