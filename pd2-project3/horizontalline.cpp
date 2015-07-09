#include "horizontalline.h"

HorizontalLine::HorizontalLine()
{

}

bool HorizontalLine::Compare(int map[8][8], int pi, int pj, int *score)
{
    int j_top = pj;
    int j_bottom = pj;

    for(int j = pj; j >= 0; j--) {
        if(map[pi][j] == map[pi][pj] && map[pi][pj] != 0) {
            j_top = j;
        }
        else {
            break;
        }
    }

    for(int j = pj; j < 8; j++) {
        if(map[pi][j] == map[pi][pj] && map[pi][pj] != 0) {
            j_bottom = j;
        }
        else {
            break;
        }
    }

    if(j_bottom - j_top == 3) {
        for(int j = j_top; j <= j_bottom; j++) {
            map[pi][j] = 0;
            *score = *score + 10;
        }
        map[pi][pj] = 7;
        return true;
    }

    return false;
}


