
// a start on a test file for developing your occupancy maps
#include "OccupancyMapBase.h"
#include "OccupancyMapSet.h"
#include "OccupancyMapVector.h"
#include <iostream>

//-----------------------------------------------------------------------------
int main()
{

  // Test basic functionality, development purposes only; remove before shipping
  {
    COccupancyMapSet myOccupancyMap;

    std::pair<int,int> TestLocation = std::make_pair(3, 4);
    myOccupancyMap.AddOccupiedLocation( TestLocation );
    
    std::cout << "Location: " << TestLocation.first << " " << TestLocation.second << " returns ";
    std::cout << myOccupancyMap.CheckIsOccupied( TestLocation ) << std::endl; 
    
    TestLocation.first = 0;
    std::cout << "Location: " << TestLocation.first << " " << TestLocation.second << " returns ";
    std::cout << myOccupancyMap.CheckIsOccupied( TestLocation ) << std::endl; 
  }

  {
    // More comprehensive test
    COccupancyMapSet myMap;
    myMap.EvalPerformance( "ExampleObservations_Small.txt", "ExampleNotObserved_Small.txt" );
  }

  return 0;
}

