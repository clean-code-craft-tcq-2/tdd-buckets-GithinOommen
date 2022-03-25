#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "ranges.h"
/*Reading checkRange */
//int feedback=0;
TEST_CASE("Read No of samples from 1-5 range")
{

 //feedback=checkRange(1,5);
 REQUIRE(checkRange(1, 5) == 4);
 REQUIRE(checkRange(1, 2) == 0);
}
