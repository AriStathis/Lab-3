
#include "OccupancyMapSet.h"

#include <iostream>
#include <string>
#include <utility>        // std::pair
#include <vector>

/*
COccupancyMapSet::COccupancyMapSet()
{

}
*/
       
void COccupancyMapSet::AddOccupiedLocation(std::pair<int,int> Location)
{
    std::cout << "Adding occupied location for set" << std::endl;
}

bool COccupancyMapSet::CheckIsOccupied( std::pair<int,int> Location )
{
    std::cout << "Checking occupied location in occupancy map set" << std::endl;
    return true;
}

std::string COccupancyMapSet::GetNameOfApproach()
{
    return "set-based approach";
}

