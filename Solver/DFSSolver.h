//
// Created by ANSHUL KUMAR NEEKHARA on 27-06-2024.
//

#include<bits/stdc++.h>
#include "../Model/GenericRubicsCube.h"

#ifndef DFSSOLVER_H
#define DFSSOLVER_H


// Typename T: GenericRubicsCube Representation used (3d, 1d, Bitboard)
// Typename H: Corresponding Hash function

template<typename T, typename H>
class DFSSolver {
private:

    vector<GenericRubicsCube::MOVE> moves;
    int max_search_depth;

    //    DFS code to find the solution (helper function)
    bool dfs(int dep) {
        if (rubiksCube.isSolved()) return true;
        if (dep > max_search_depth) return false;
        for (int i = 0; i < 18; i++) {
            rubiksCube.move(GenericRubicsCube::MOVE(i));
            moves.push_back(GenericRubicsCube::MOVE(i));
            if (dfs(dep + 1)) return true;
            moves.pop_back();
            rubiksCube.invert(GenericRubicsCube::MOVE(i));
        }
        return false;
    }

public:
    T rubiksCube;

    DFSSolver(T _rubiksCube, int _max_search_depth = 8) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    vector<GenericRubicsCube::MOVE> solve() {
        dfs(1);
        return moves;
    }

};

#endif //DFSSOLVER_H
