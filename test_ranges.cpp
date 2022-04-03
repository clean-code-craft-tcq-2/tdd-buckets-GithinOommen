#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "ranges.h"
/*Reading checkRange */
//int feedback=0;
TEST_CASE("Read No of samples from 1-5 range")
{
int Samples[8] = {3, 3, 5, 4, 10, 11, 12, 13};
int NoOfSamples=sizeof(Samples)/sizeof(Samples[0]);
  
 //feedback=checkRange(1,5);
 REQUIRE(checkRange(1, 5,NoOfSamples,Samples) == 4);
 REQUIRE(checkRange(1, 2,NoOfSamples,Samples) == 0);
  REQUIRE(checkRangelimit(1,5,0,Samples)==1);
  REQUIRE(checkRangelimit(1,2,0,Samples)==0);
  
int Samples1[0] = {};
int NoOfSamples1=sizeof(Samples1)/sizeof(Samples1[0]);
  
 //feedback=checkRange(1,5);
 REQUIRE(checkRange(1, 5,NoOfSamples1,Samples1) == 0);
}
TEST_CASE("Writing integer of array with 12bit Sensor Value and compare with ADC result")
{
   int size =8;
  int resolution =12;
   int ActualOutput[10];
   int SensorValue[8] = {300 , 500 , 1400 , 3000 , 2500 , 3600 , 4000,4094};
   int ExpectedOutput[8] = {1 ,1 , 3, 7 , 6 , 9 ,10 ,10 };
  GetADCValue(SensorValue,ActualOutput,size,resolution);
for(int index=0; size > index ; index++)
   {
         printf("\nActualOutput[%d],%d",index,ActualOutput[index]);
     REQUIRE(ActualOutput[index] == ExpectedOutput[index]);
   }
}
