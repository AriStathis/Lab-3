// OccupancyMapSet.cpp
//
// Using set container for occupancy map

#include "OccupancyMapSet.h"

// Adding/ Inserting the location to the Observed set
void COccupancyMapSet::AddOccupiedLocation(std::pair<int,int> Location)
{
    // First Check if point is already occupied (No Doubles)
    if (CheckIsOccupied(Location) == true)
    {
        // Do not add if already occupied
        return;
    }
    // Insert the paid
    ObservedSet.insert(Location);
}

// Check if the location is in the occupied set 
bool COccupancyMapSet::CheckIsOccupied( std::pair<int,int> Location )
{ 
    // Initial value to return if locaiton is not occupied
    bool Result = false;

    // Check if the location is in the set
    if (ObservedSet.find(Location) != ObservedSet.end())
        {
            // Location is in the observed set
            Result = true;
        }
    // Return the result
    return Result;
}

// Return the name of the approach 
std::string COccupancyMapSet::GetNameOfApproach()
{
    return "set-based approach";
}

