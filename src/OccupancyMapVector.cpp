#include "OccupancyMapVector.h"
#include <iostream>

void COccupancyMapVector::AddOccupiedLocation(std::pair<int,int> Location)
{
    std::cout << "Adding occupied location for vector" << std::endl;
}

bool COccupancyMapVector::CheckIsOccupied( std::pair<int,int> Location )
{
    std::cout << "Checking occupied location for vector" << std::endl;
    return true;
}

std::string COccupancyMapVector::GetNameOfApproach()
{
    return "vector";
}