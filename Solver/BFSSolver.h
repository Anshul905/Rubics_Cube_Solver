//
// Created by ANSHUL KUMAR NEEKHARA on 27-06-2024.
//

#include<bits/stdc++.h>
#include "../Model/GenericRubicsCube.h"


#ifndef BFSSOLVER_H
#define BFSSOLVER_H

// Typename T: GenericRubicsCube Representation used (3d, 1d, Bitboard)
// Typename H: Corresponding Hash function

template<typename T, typename H>
class BFSSolver {
private:
    vector<GenericRubicsCube::MOVE> moves;
    unordered_map<T, bool, H> visited;
    unordered_map<T, GenericRubicsCube::MOVE, H> move_done;

    //    bfs() -> performs breadth-first-search and returns a solved Rubik's Cube
    //    move_done[] -> Back-Pointer map as to how we reached that state
    T bfs() {
        queue<T> q;
        q.push(rubiksCube);
        visited[rubiksCube] = true;

        while (!q.empty()) {
            T cur_cube = q.front();
            q.pop();
            if (cur_cube.isSolved()) {
                return cur_cube;
            }
            for (int i = 0; i < 18; i++) {
                auto curr_move = GenericRubicsCube::MOVE(i);
                cur_cube.move(curr_move);

                // Prune unnecessary moves by checking if the new state has been visited
                if (!visited[cur_cube]) {
                    visited[cur_cube] = true;
                    move_done[cur_cube] = curr_move ;
                    q.push(cur_cube);
                }

                // Invert the move to restore the original state
                cur_cube.invert(curr_move);
            }
        }
        return rubiksCube;
    }

public:
    T rubiksCube;

    BFSSolver(T _rubiksCube) {
        rubiksCube = _rubiksCube;
    }

    //    Performs BFS and returns the vector of moves done to solve the cube
    vector<GenericRubicsCube::MOVE> solve() {
        T solved_cube = bfs();
        assert(solved_cube.isSolved());
        T curr_cube = solved_cube;
        while (!(curr_cube == rubiksCube)) {
            GenericRubicsCube::MOVE curr_move = move_done[curr_cube];
            moves.push_back(curr_move);
            curr_cube.invert(curr_move);
        }
        rubiksCube = solved_cube;
        reverse(moves.begin(), moves.end());
        return moves;
    }
};

#endif //BFSSOLVER_H

