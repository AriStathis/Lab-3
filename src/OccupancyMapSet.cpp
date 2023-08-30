
#include "OccupancyMapSet.h"

#include <iostream>
#include <string>
#include <utility>        // std::pair
#include <vector>
#include <set>

void COccupancyMapSet::AddOccupiedLocation(std::pair<int,int> Location)
{
    ObservedSet.insert(Location);
}

bool COccupancyMapSet::CheckIsOccupied( std::pair<int,int> Location )
{
    bool Result = false;

    if (ObservedSet.find(Location) != ObservedSet.end())
        {
            return true;
        }
    return Result;
}

std::string COccupancyMapSet::GetNameOfApproach()
{
    return "set-based approach";
}

