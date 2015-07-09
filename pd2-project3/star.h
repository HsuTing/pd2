#ifndef STAR_H
#define STAR_H

#include "special.h"

class Star : public SpecialSymbol
{
public:
    Star();

    bool Compare(int map[8][8], int pi, int pj, int *score);
};

#endif // STAR_H
