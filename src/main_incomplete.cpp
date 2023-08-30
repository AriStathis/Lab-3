
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
    COccupancyMapSet myOccupancySet;
    COccupancyMapVector myOccupancyVector;

    std::pair<int,int> TestLocation1 = std::make_pair(3, 4);
    myOccupancySet.AddOccupiedLocation( TestLocation1 );
    myOccupancyVector.AddOccupiedLocation( TestLocation1 );

    
    std::cout << "Location: " << TestLocation1.first << " " << TestLocation1.second << " returns ";
    std::cout << myOccupancySet.CheckIsOccupied( TestLocation1 ) << " and "   
      << myOccupancyVector.CheckIsOccupied( TestLocation1 ) << std::endl; 

    TestLocation1.first = 0;
    std::cout << "Location: " << TestLocation1.first << " " << TestLocation1.second << " returns ";
    std::cout << myOccupancySet.CheckIsOccupied( TestLocation1 ) << " and "     
      << myOccupancyVector.CheckIsOccupied( TestLocation1 ) << std::endl;     
  }
/*
  {
    // More comprehensive test
    COccupancyMapSet myMap;
    myMap.EvalPerformance( "ExampleObservations_Small.txt", "ExampleNotObserved_Small.txt" );
  }
*/
  return 0;
}

