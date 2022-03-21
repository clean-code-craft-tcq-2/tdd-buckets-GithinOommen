#include "ranges.h"

int Samples[8] = {3, 3, 5, 4, 10, 11, 12, 13};
  
  int CountSamples()
  {
          int NoOfSamples = 0;
          NoOfSamples=sizeof(Samples)/sizeof(Samples[0]);
          
          return NoOfSamples;
  
  }
  
  int checkRange(int LowLimit, int HighLimit)
  {
          int i=0,count=0;
          int samplesno=CountSamples();
   while(i<samplesno)
   {
          if((LowLimit<=Samples[i])&& (HighLimit>=Samples[i]))
          {
                  count++;
          }
          ++i;
   }
   return count;
  }
