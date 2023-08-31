#include "OccupancyMapBase.h"
#include "OccupancyMapSet.h"
#include "OccupancyMapVector.h"
#include "TestMap.h"
#include <iostream>

//-----------------------------------------------------------------------------
int main()
{
  CTestMap Test;
  Test.TestVector();
  Test.TestSet();

  return 0;
}

