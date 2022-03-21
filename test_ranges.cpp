#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "ranges.h"
/*Reading checkRange */
TEST_CASE("Read No of samples from 1-5 range")
{

 checkRange(1,5);
}
