#include "OccupancyMapVector.h"
#include <iostream>

COccupancyMapVector::COccupancyMapVector()
{
    std::vector<std::vector<int>> VectorOccupancyMap;
}

void COccupancyMapVector::AddOccupiedLocation(std::pair<int,int> Location)
{
    std::cout << "Adding occupied location for vector" << std::endl;
}

bool COccupancyMapVector::CheckIsOccupied( std::pair<int,int> Location )
{

    return true;
}

std::string COccupancyMapVector::GetNameOfApproach()
{
    return "vector";
}