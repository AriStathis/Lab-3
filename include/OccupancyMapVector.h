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
        COccupancyMapVector();
        void AddOccupiedLocation(std::pair<int,int> Location);
        bool CheckIsOccupied( std::pair<int,int> Location );
        std::string GetNameOfApproach();
    private:
        std::vector<std::vector<int>> VectorOccupancyMap;
};

#endif 