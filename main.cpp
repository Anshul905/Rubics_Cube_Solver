#include <bits/stdc++.h>
using namespace std ;

#include "Model/RubicsCube3dArray.cpp"

int main()
{

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






    RubiksCube3dArray object3DArray;
    object3DArray.print();

    int n = 10 ;
    vector<GenericRubicsCube::MOVE> shuffle_moves = object3DArray.randomShuffleCube(n);
    for(auto move: shuffle_moves)
        cout << object3DArray.getMove(move) << " ";
    cout << "\n";

    object3DArray.print();

    for( int i=n-1 ; i>=0 ; i-- ){
        auto move = shuffle_moves[i] ;
        cout << object3DArray.getMove(move) << " ";
        switch ( move ) {
            case GenericRubicsCube::MOVE::L:
                object3DArray.lPrime() ; break;
            case GenericRubicsCube::MOVE::LPRIME:
                object3DArray.l(); break;
            case GenericRubicsCube::MOVE::L2:
                object3DArray.l2() ; break;

            case GenericRubicsCube::MOVE::R:
                object3DArray.rPrime() ; break;
            case GenericRubicsCube::MOVE::RPRIME:
                object3DArray.r() ; break;
            case GenericRubicsCube::MOVE::R2:
                object3DArray.r2() ; break;

            case GenericRubicsCube::MOVE::U:
                object3DArray.uPrime() ; break;
            case GenericRubicsCube::MOVE::UPRIME:
                object3DArray.u() ; break;
            case GenericRubicsCube::MOVE::U2:
                object3DArray.u2() ; break;

            case GenericRubicsCube::MOVE::D:
                object3DArray.dPrime() ; break;
            case GenericRubicsCube::MOVE::DPRIME:
                object3DArray.d() ; break;
            case GenericRubicsCube::MOVE::D2:
                object3DArray.d2() ; break;

            case GenericRubicsCube::MOVE::F:
                object3DArray.fPrime() ; break;
            case GenericRubicsCube::MOVE::FPRIME:
                object3DArray.f() ; break;
            case GenericRubicsCube::MOVE::F2:
                object3DArray.f2() ; break;

            case GenericRubicsCube::MOVE::B:
                object3DArray.bPrime() ; break;
            case GenericRubicsCube::MOVE::BPRIME:
                object3DArray.b() ; break;
            case GenericRubicsCube::MOVE::B2:
                object3DArray.b2() ; break;
        }
    }
    cout << "\n";

    object3DArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";







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






    return 0;
}
