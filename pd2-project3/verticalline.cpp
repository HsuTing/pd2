#include "verticalline.h"

VerticalLine::VerticalLine()
{

}

bool VerticalLine::Compare(int map[8][8], int pi, int pj, int *score)
{
    int i_top = pi;
    int i_bottom = pi;

    for(int i = pi; i >= 0; i--) {
        if(map[i][pj] == map[pi][pj] && map[pi][pj] != 0) {
            i_top = i;
        }
        else {
            break;
        }
    }

    for(int i = pi; i < 8; i++) {
        if(map[i][pj] == map[pi][pj] && map[pi][pj] != 0) {
            i_bottom = i;
        }
        else {
            break;
        }
    }

    if(i_bottom - i_top == 3) {
        for(int i = i_top; i <= i_bottom; i++) {
            map[i][pj] = 0;
            *score = *score + 10;
        }
        map[pi][pj] = 8;
        return true;
    }

    return false;
}


