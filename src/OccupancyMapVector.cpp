#include "OccupancyMapVector.h"
#include <iostream>

static const int Rows = 240;
static const int Columns = 240;

COccupancyMapVector::COccupancyMapVector()
{
    VectorOccupancyMap = std::vector<std::vector<int>>(Rows, std::vector<int>(Columns, 0));
}

void COccupancyMapVector::AddOccupiedLocation(std::pair<int,int> Location)
{
    VectorOccupancyMap[Location.first][Location.second] = 1;
}

bool COccupancyMapVector::CheckIsOccupied( std::pair<int,int> Location )
{
    bool Result = false;
        if (VectorOccupancyMap[Location.first][Location.second] == 1) 
        {
            Result = true;
        }
    return Result;
 
}

std::string COccupancyMapVector::GetNameOfApproach()
{
    return "vector";
}