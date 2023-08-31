// OccupancyMapVector.cpp
//
// Using vector container for occupancy map

#include "OccupancyMapVector.h"

// Initial value of rows and columns of the 240x240 grid 
static const int Rows = 241;
static const int Columns = 241;

// Iniitalise a 2D vector of zeroes
COccupancyMapVector::COccupancyMapVector()
{
    // Initialse a vector of 240x240 filled with zeroes
    VectorOccupancyMap = std::vector<std::vector<int>>(Rows, std::vector<int>(Columns, 0));
}

// Add an occupied coordinate
void COccupancyMapVector::AddOccupiedLocation(std::pair<int,int> Location)
{
    // Set the value of the occupied locaiton to 1
    VectorOccupancyMap[Location.first][Location.second] = 1;
}

// Check if the location is occupied returining a bool 
bool COccupancyMapVector::CheckIsOccupied( std::pair<int,int> Location )
{
    // Return value if no occupied space
    bool Result = false;

    // Check if the desired location is occupied (i.e. 1)
        if (VectorOccupancyMap[Location.first][Location.second] == 1) 
        {
            // Change return value
            Result = true;
        }
    // Return the result 
    return Result;
 
}

// Return the name of the approach
std::string COccupancyMapVector::GetNameOfApproach()
{
    return "vector";
}