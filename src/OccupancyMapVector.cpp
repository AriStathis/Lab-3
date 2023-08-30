#include "OccupancyMapVector.h"
#include <iostream>

void COccupancyMapVector::AddOccupiedLocation(std::pair<int,int> Location)
{
    int FirstCoordinate = Location.first;
    int SecondCoordinate = Location.second;
}

bool COccupancyMapVector::CheckIsOccupied( std::pair<int,int> Location )
{

    return true;
}

std::string COccupancyMapVector::GetNameOfApproach()
{
    return "vector";
}