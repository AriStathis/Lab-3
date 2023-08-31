#ifndef _TESTMAP_H
#define _TESTMAP_H

#include "OccupancyMapSet.h"
#include "OccupancyMapVector.h"

//---CTestMap------------------------------------------
// Class for testing the desired form of container
class CTestMap
{
    public:
        // Testing the set map
        void TestSet();       

        // Testing the vector map        
        void TestVector();

};

#endif