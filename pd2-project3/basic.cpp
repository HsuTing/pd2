#include "basic.h"

Basic::Basic()
{

}

bool Basic::Compare(int map[8][8], int pi, int pj, int *score)
{
    int i_top = pi;
    int i_bottom = pi;
    int j_top = pj;
    int j_bottom = pj;

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

    if(i_bottom - i_top >= 2) {
        for(int i = i_top; i <= i_bottom; i++) {
            map[i][pj] = 0;
            *score = *score + 10;
        }
        return true;
    }

    if(j_bottom - j_top >= 2) {
        for(int j = j_top; j <= j_bottom; j++) {
            map[pi][j] = 0;
            *score = *score + 10;
        }
        return true;
    }

    return false;
}


