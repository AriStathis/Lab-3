#ifndef _OCCUPANCYMAPHVECTOR_H
#define _OCCUPANCYMAPHVECTOR_H

#include "OccupancyMapBase.h"

//---COccupancyMapVector------------------------------------------
// Child class from COccupancyMapBase
// Re-written pure virtual functions
// Functionality relating to the container (Add and check occupied locations, naming the approach used)
class COccupancyMapVector: public COccupancyMapBase
{
    public:
        // Initialise the 2D vector map
        COccupancyMapVector();

        // Add occupied locations
        void AddOccupiedLocation(std::pair<int,int> Location);

        // Checking if locations are occupied
        bool CheckIsOccupied( std::pair<int,int> Location );

        // Return the name of the approach 
        std::string GetNameOfApproach();
    private:
        std::vector<std::vector<int>> VectorOccupancyMap;               // Obser
};

#endif 