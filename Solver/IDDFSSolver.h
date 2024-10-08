//
// Created by ANSHUL KUMAR NEEKHARA on 28-06-2024.
//


#include<bits/stdc++.h>
#include "../Model/GenericRubicsCube.h"
#include "DFSSolver.h"

#ifndef IDDFSSOLVER_H
#define IDDFSSOLVER_H

template<typename T, typename H>
class IDDFSSolver {

private:
    int max_search_depth;
    vector<GenericRubicsCube::MOVE> moves;

public:
    T rubiksCube;

    IDDFSSolver(T _rubiksCube, int _max_search_depth = 7) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    // Used DFSSolver with increasing max_search_depth
    vector<GenericRubicsCube::MOVE> solve() {
        for (int i = 1; i <= max_search_depth; i++) {
            DFSSolver<T, H> dfsSolver(rubiksCube, i);
            moves = dfsSolver.solve();
            if (dfsSolver.rubiksCube.isSolved()) {
                rubiksCube = dfsSolver.rubiksCube;
                break;
            }else {
                cout << "cube can not be solved in " << i << " moves."<< endl ;
            }
        }
        return moves;
    }


};


#endif //IDDFSSOLVER_H
