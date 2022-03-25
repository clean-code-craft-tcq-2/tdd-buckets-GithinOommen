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
  
int Samples1[0] = {};
int NoOfSamples=sizeof(Samples)/sizeof(Samples[0]);
  
 //feedback=checkRange(1,5);
 REQUIRE(checkRange(1, 5,NoOfSamples,Samples) == 0);
}
