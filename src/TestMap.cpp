// TestMap.cpp
//
// Test functions for differing container types

#include "TestMap.h"

// Testing the set method used for occupied locations
void CTestMap::TestSet()
{
    COccupancyMapSet myMap;
    myMap.EvalPerformance( "../examples/ExampleObservations_Small.txt", "../examples/ExampleNotObserved_Small.txt" );
}

// Testing the set used for occupied locations
void CTestMap::TestVector()
{
    COccupancyMapVector myVector;
    myVector.EvalPerformance( "../examples/ExampleObservations_Small.txt", "../examples/ExampleNotObserved_Small.txt" );
}