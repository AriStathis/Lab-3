#include "OccupancyMapBase.h"
#include "OccupancyMapSet.h"
#include "OccupancyMapVector.h"
#include "TestMap.h"
#include <iostream>

int main()
{
  // Comprehensive testing
  {
    // Initialise test class 
    CTestMap Test;
    
    // Testing vector and set methods
    Test.TestVector();
    Test.TestSet();
  }
  return 0;
}

