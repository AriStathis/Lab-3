#include "OccupancyMapVector.h"
#include <iostream>

void AddOccupiedLocation(std::pair<int,int> Location)
{
    std::cout << "Adding occupied location for vector" << std::endl;
}

bool CheckIsOccupied( std::pair<int,int> Location )
{
    std::cout << "Checking occupied location for vector" << std::endl;
    return true;
}

std::string GetNameOfApproach()
{
    return "vector";
}