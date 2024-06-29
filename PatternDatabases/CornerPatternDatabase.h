//
// Created by ANSHUL KUMAR NEEKHARA on 29-06-2024.
//


#include <bits/stdc++.h>
using namespace std;

#include "../Model/GenericRubicsCube.h"
#include "PatternDatabase.h"
#include "PermutationIndexer.h"

#ifndef CORNERPATTERNDATABASE_H
#define CORNERPATTERNDATABASE_H

class CornerPatternDatabase : public PatternDatabase {

    typedef GenericRubicsCube::FACE F;

    PermutationIndexer<8> permIndexer;

public:
    CornerPatternDatabase();
    CornerPatternDatabase(uint8_t init_val);
    uint32_t getDatabaseIndex(const GenericRubicsCube& cube) const ;

};
#endif //CORNERPATTERNDATABASE_H
