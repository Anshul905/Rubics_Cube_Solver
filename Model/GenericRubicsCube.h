//
// Created by ANSHUL KUMAR NEEKHARA on 25-06-2024.
//

#include <bits/stdc++.h>
using namespace  std ;

#ifndef GENERICRUBICSCUBE_H
#define GENERICRUBICSCUBE_H



class GenericRubicsCube {
public:
    enum class FACE {
        UP,
        LEFT,
        FRONT,
        RIGHT,
        BACK,
        DOWN
    };

    enum class COLOR {
        WHITE,
        GREEN,
        RED,
        BLUE,
        ORANGE,
        YELLOW
    };

    enum class MOVE {
        L, LPRIME, L2,
        R, RPRIME, R2,
        U, UPRIME, U2,
        D, DPRIME, D2,
        F, FPRIME, F2,
        B, BPRIME, B2
    };

    virtual COLOR getColor(FACE face, unsigned row, unsigned col) const = 0;

    static char getColorLetter(COLOR color);

    virtual bool isSolved() const = 0;

    static string getMove(MOVE ind);

    void print() const;

    vector<MOVE> randomShuffleCube(unsigned int times);

    GenericRubicsCube &move(MOVE ind);

    GenericRubicsCube &invert(MOVE ind);

    virtual GenericRubicsCube &f() = 0;

    virtual GenericRubicsCube &fPrime() = 0;

    virtual GenericRubicsCube &f2() = 0;

    virtual GenericRubicsCube &u() = 0;

    virtual GenericRubicsCube &uPrime() = 0;

    virtual GenericRubicsCube &u2() = 0;

    virtual GenericRubicsCube &l() = 0;

    virtual GenericRubicsCube &lPrime() = 0;

    virtual GenericRubicsCube &l2() = 0;

    virtual GenericRubicsCube &r() = 0;

    virtual GenericRubicsCube &d() = 0;

    virtual GenericRubicsCube &dPrime() = 0;

    virtual GenericRubicsCube &d2() = 0;

    virtual GenericRubicsCube &rPrime() = 0;

    virtual GenericRubicsCube &r2() = 0;

    virtual GenericRubicsCube &b() = 0;

    virtual GenericRubicsCube &bPrime() = 0;

    virtual GenericRubicsCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;
};


#endif //GENERICRUBICSCUBE_H
