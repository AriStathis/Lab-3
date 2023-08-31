#ifndef _OCCUPANCYMAPHSET_H
#define _OCCUPANCYMAPHSET_H

#include "OccupancyMapBase.h"

//---COccupancyMapSet---------------------------------------------
// Set class for storing and checking the occupancy map
// Re-written pure virtual functions in the parent class 
// Funcitonality of the container: adding pairs into the set, checking if occupied, naming the approach
class COccupancyMapSet: public COccupancyMapBase
{
    public:
        // Adding occupied location onto map
        void AddOccupiedLocation(std::pair<int,int> Location);

        // Checking if location is occupied on the map
        bool CheckIsOccupied( std::pair<int,int> Location );

        // Returns name of approach
        std::string GetNameOfApproach();       
    
    private:
        std::set<std::pair<int, int>> SetOccupancyMap;              // Observed set of points
};

#endif 

