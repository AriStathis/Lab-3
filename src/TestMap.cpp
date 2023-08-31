#include "TestMap.h"

void CTestMap::TestSet()
{
        COccupancyMapSet myMap;
    myMap.EvalPerformance( "../examples/ExampleObservations_Small.txt", "../examples/ExampleNotObserved_Small.txt" );
}

void CTestMap::TestVector()
{
    COccupancyMapVector myVector;
    myVector.EvalPerformance( "../examples/ExampleObservations_Small.txt", "../examples/ExampleNotObserved_Small.txt" );
}