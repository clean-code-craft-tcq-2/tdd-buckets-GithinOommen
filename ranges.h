#ifndef RANGES_H
#define RANGES_H
#include <stdio.h>
#include<math.h>
#include "adc.h"
#include <stdlib.h>
#include <float.h>


 int checkRange(int LowLimit, int HighLimit,int samplesno, int* Samples);
 int checkRangelimit(int LowLimit, int HighLimit, int index, int* Samples);
#endif
