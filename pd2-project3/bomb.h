#ifndef BOMB_H
#define BOMB_H

#include "special.h"

class Bomb : public SpecialSymbol
{
public:
    Bomb();

    bool Compare(int map[8][8], int pi, int pj, int *score);
};

#endif // BOMB_H
