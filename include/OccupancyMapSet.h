#ifndef _OCCUPANCYMAPHSET_H
#define _OCCUPANCYMAPHSET_H

#include "OccupancyMapBase.h"
#include <string>
#include <utility>       
#include <vector>

class COccupancyMapSet: public COccupancyMapBase
{
    public:
        //COccupancyMapSet();
        void AddOccupiedLocation(std::pair<int,int> Location);
        bool CheckIsOccupied( std::pair<int,int> Location );
        std::string GetNameOfApproach();

    private:
        
};

#endif 
