#include <bits/stdc++.h>
using namespace std ;

#include "Model/RubicsCube3dArray.cpp"
#include "Model/RubicsCube1dArray.cpp"
#include "Model/RubicsCubeBitBoard.cpp"


#include "./Solver/DFSSolver.h"
int main()
{

    // RubiksCube3dArray object3DArray;
    // object3DArray.print();


    // ############  3D ############

    // RubiksCube3dArray object3DArray;
    // object3DArray.print();
    //
    // if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";
    //
    //
    // object3DArray.u();
    // object3DArray.print();
    //
    // object3DArray.l();
    // object3DArray.print();
    //
    // object3DArray.f();
    // object3DArray.print();
    //
    // object3DArray.r();
    // object3DArray.print();
    //
    // object3DArray.b();
    // object3DArray.print();
    //
    // object3DArray.d();
    // object3DArray.print();
    //
    // object3DArray.dPrime();
    // object3DArray.print();
    //
    // object3DArray.bPrime();
    // object3DArray.print();
    //
    // object3DArray.rPrime();
    // object3DArray.print();
    //
    // object3DArray.fPrime();
    // object3DArray.print();
    //
    // object3DArray.lPrime();
    // object3DArray.print();
    //
    // object3DArray.uPrime();
    // object3DArray.print();
    //
    // if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";







    // object3DArray.u2();
    // object3DArray.print();
    //
    // object3DArray.uPrime();
    // object3DArray.print();
    //
    // object3DArray.uPrime();
    // object3DArray.print();
    //
    // if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";
    //
    //
    // object3DArray.f2();
    // object3DArray.print();
    //
    // object3DArray.u2();
    // object3DArray.print();
    //
    // object3DArray.d2();
    // object3DArray.print();
    //
    // object3DArray.dPrime();
    // object3DArray.dPrime();
    // object3DArray.print();
    //
    // object3DArray.u2();
    // object3DArray.print();
    //
    //
    // object3DArray.r2();
    // object3DArray.r2();
    // object3DArray.print();
    //
    // object3DArray.b2();
    // object3DArray.print();
    //
    // object3DArray.l();
    // object3DArray.print();
    //
    // object3DArray.l2();
    // object3DArray.l();
    // object3DArray.print();
    //
    // object3DArray.bPrime();
    // object3DArray.bPrime();
    // object3DArray.print();
    //
    //
    // object3DArray.f2();
    // object3DArray.print();
    //
    // if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";
    //






    // RubiksCube3dArray object3DArray;
    // object3DArray.print();
    //
    // int n = 20 ;
    // vector<GenericRubicsCube::MOVE> shuffle_moves = object3DArray.randomShuffleCube(n);
    // for(auto move: shuffle_moves)
    //     cout << object3DArray.getMove(move) << " ";
    // cout << "\n";
    //
    // object3DArray.print();
    //
    // for( int i=n-1 ; i>=0 ; i-- ){
    //     auto move = shuffle_moves[i] ;
    //     cout << object3DArray.getMove(move) << " ";
    //     switch ( move ) {
    //         case GenericRubicsCube::MOVE::L:
    //             object3DArray.lPrime() ; break;
    //         case GenericRubicsCube::MOVE::LPRIME:
    //             object3DArray.l(); break;
    //         case GenericRubicsCube::MOVE::L2:
    //             object3DArray.l2() ; break;
    //
    //         case GenericRubicsCube::MOVE::R:
    //             object3DArray.rPrime() ; break;
    //         case GenericRubicsCube::MOVE::RPRIME:
    //             object3DArray.r() ; break;
    //         case GenericRubicsCube::MOVE::R2:
    //             object3DArray.r2() ; break;
    //
    //         case GenericRubicsCube::MOVE::U:
    //             object3DArray.uPrime() ; break;
    //         case GenericRubicsCube::MOVE::UPRIME:
    //             object3DArray.u() ; break;
    //         case GenericRubicsCube::MOVE::U2:
    //             object3DArray.u2() ; break;
    //
    //         case GenericRubicsCube::MOVE::D:
    //             object3DArray.dPrime() ; break;
    //         case GenericRubicsCube::MOVE::DPRIME:
    //             object3DArray.d() ; break;
    //         case GenericRubicsCube::MOVE::D2:
    //             object3DArray.d2() ; break;
    //
    //         case GenericRubicsCube::MOVE::F:
    //             object3DArray.fPrime() ; break;
    //         case GenericRubicsCube::MOVE::FPRIME:
    //             object3DArray.f() ; break;
    //         case GenericRubicsCube::MOVE::F2:
    //             object3DArray.f2() ; break;
    //
    //         case GenericRubicsCube::MOVE::B:
    //             object3DArray.bPrime() ; break;
    //         case GenericRubicsCube::MOVE::BPRIME:
    //             object3DArray.b() ; break;
    //         case GenericRubicsCube::MOVE::B2:
    //             object3DArray.b2() ; break;
    //     }
    // }
    // cout << "\n";
    //
    // object3DArray.print();
    //
    // if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";







    // Create two Cubes ------------------------------------------------------------------------------------------

       // RubiksCube3dArray cube1;
       // RubiksCube3dArray cube2;

     // Equality and assignment of cubes --------------------------------------------------------------------------

       // if(cube1 == cube2) cout << "Is equal\n";
       // else cout << "Not Equal\n";
       //
       // cube1.randomShuffleCube(1);
       //
       // if(cube1 == cube2) cout << "Is equal\n";
       // else cout << "Not Equal\n";
       //
       // cube2 = cube1;
       //
       // if(cube1 == cube2) cout << "Is equal\n";
       // else cout << "Not Equal\n";



     // Unordered_map of Cubes  ------------------------------------------------------------------------------------

       // unordered_map<RubiksCube3dArray, bool, Hash3d> mp1;
       //
       // mp1[cube1] = true;
       // cube2.randomShuffleCube(8);
       // if (mp1[cube1]) cout << "Cube1 is present\n";
       // else cout << "Cube1 is not present\n";
       //
       // if (mp1[cube2]) cout << "Cube2 is present\n";
       // else cout << "Cube2 is not present\n";








// ################## ALL ##################

//    RubiksCube3dArray object3DArray;
//    RubiksCube1dArray object1dArray;
//    RubiksCubeBitboard objectBitboard;
//
//    object3DArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    objectBitboard.u();
//    object3DArray.u();
//    object1dArray.u();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.l();
//    object3DArray.l();
//    object1dArray.l();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.f();
//    object3DArray.f();
//    object1dArray.f();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.r();
//    object3DArray.r();
//    object1dArray.r();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.b();
//    object3DArray.b();
//    object1dArray.b();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.d();
//    object3DArray.d();
//    object1dArray.d();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    objectBitboard.dPrime();
//    object3DArray.dPrime();
//    object1dArray.dPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.bPrime();
//    object3DArray.bPrime();
//    object1dArray.bPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.rPrime();
//    object3DArray.rPrime();
//    object1dArray.rPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.fPrime();
//    object3DArray.fPrime();
//    object1dArray.fPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.lPrime();
//    object3DArray.lPrime();
//    object1dArray.lPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    objectBitboard.uPrime();
//    object3DArray.uPrime();
//    object1dArray.uPrime();
//    objectBitboard.print();
//    object3DArray.print();
//    object1dArray.print();
//
//    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";
//
//    if (objectBitboard.isSolved()) cout << "SOLVED\n\n";
//    else cout << "NOT SOLVED\n\n";





// Create two Cubes ------------------------------------------------------------------------------------------

    // RubiksCube3dArray cube1 , cube2 ;
    // RubiksCube1dArray cube1 , cube2;
    // RubiksCubeBitboard cube1 , cube2;



//  Equality and assignment of cubes --------------------------------------------------------------------------

    // if(cube1 == cube2) cout << "Is equal\n";
    // else cout << "Not Equal\n";
    //
    // cube1.randomShuffleCube(1);
    //
    // if(cube1 == cube2) cout << "Is equal\n";
    // else cout << "Not Equal\n";
    //
    // cube2 = cube1;
    //
    // if(cube1 == cube2) cout << "Is equal\n";
    // else cout << "Not Equal\n";


//  Unordered_map of Cubes  ------------------------------------------------------------------------------------


    // unordered_map<RubiksCube3dArray, bool, Hash3d> mp1;
    // unordered_map<RubiksCube1dArray, bool, Hash1d> mp1;
    // unordered_map<RubiksCubeBitboard, bool, HashBitboard> mp1;

    // mp1[cube1] = true;
    // cube2.randomShuffleCube(8);
    // if (mp1[cube1]) cout << "Cube1 is present\n";
    // else cout << "Cube1 is not present\n";
    //
    // if (mp1[cube2]) cout << "Cube2 is present\n";
    // else cout << "Cube2 is not present\n";





    // DFS Solver Testing __________________________________________________________________________________________
       RubiksCube3dArray cube;
       // cube.print();

      int suffleTime = 7  ;
      int max_search_depth = 6 ;


       vector<GenericRubicsCube::MOVE> shuffle_moves = cube.randomShuffleCube(suffleTime);
       for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
       cout << "\n";
       cube.print();


       DFSSolver<RubiksCube3dArray, Hash3d> dfsSolver(cube,max_search_depth);
       vector<GenericRubicsCube::MOVE> solve_moves = dfsSolver.solve();
    
       cout << "Moves are : { " ;
       for (auto move: solve_moves) cout << cube.getMove(move) << " ";
       cout << "}\n";
       // dfsSolver.rubiksCube.print();

        cube = dfsSolver.rubiksCube ;
        if ( cube.isSolved()) cout << "SOLVED\n\n";
        else cout << "NOT SOLVED\n\n";


    return 0;
}
