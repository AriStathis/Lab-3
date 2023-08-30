#ifndef _OCCUPANCYMAPHVECTOR_H
#define _OCCUPANCYMAPHVECTOR_H

#include "OccupancyMapBase.h"
#include <string>
#include <utility>       
#include <vector>
#include <set>

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