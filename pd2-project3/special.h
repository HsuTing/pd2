#ifndef SPECIAL_H
#define SPECIAL_H

#include <cstring>
#include <iostream>
using namespace std;

class SpecialSymbol
{
public:
    SpecialSymbol();

    virtual bool Compare(int map[8][8], int pi, int pj, int *score);
};

#endif // SPECIAL_H
