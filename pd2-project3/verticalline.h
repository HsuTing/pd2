#ifndef VERTICALLINE_H
#define VERTICALLINE_H

#include "special.h"

class VerticalLine : public SpecialSymbol
{
public:
    VerticalLine();

    bool Compare(int map[8][8], int pi, int pj, int *score);
};

#endif // VERTICALLINE_H
