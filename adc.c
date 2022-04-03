#include "ranges.h"
int DynamicRange(int resolution)
{
        return (pow(2,resolution) - 2);
        
}

int* GetADCValue(int *InputSensorValue, int *ActualADCValue ,int size, int resolution)
{
         float calculateADCValue;
  for(int index=0; size > index ; index++)
  {
    calculateADCValue =  (((float)10* (float)InputSensorValue[index]) / DynamicRange(resolution) );
    ActualADCValue[index]= round(calculateADCValue);;
  }
  return ActualADCValue;
}
