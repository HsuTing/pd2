#ifndef HORIZONTALLINE_H
#define HORIZONTALLINE_H

#include "special.h"

class HorizontalLine : public SpecialSymbol
{
public:
    HorizontalLine();

    bool Compare(int map[8][8], int pi, int pj, int *score);
};

#endif // HORIZONTALLINE_H
