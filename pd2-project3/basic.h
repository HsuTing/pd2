#ifndef BASIC_H
#define BASIC_H

#include "special.h"

class Basic : public SpecialSymbol
{
public:
    Basic();

    bool Compare(int map[8][8], int pi, int pj, int *score);
};

#endif // BASIC_H
