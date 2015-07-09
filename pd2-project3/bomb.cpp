#include "bomb.h"

Bomb::Bomb()
{

}

bool Bomb::Compare(int map[8][8], int pi, int pj, int *score)
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

    if(i_bottom - i_top == 2) {
        for(int j = pj; j >= 0; j--) {
            if(map[i_top][j] == map[pi][pj] && map[pi][pj] != 0) {
                j_top = j;
            }
            else {
                break;
            }
        }

        for(int j = pj; j < 8; j++) {
            if(map[i_top][j] == map[pi][pj] && map[pi][pj] != 0) {
                j_bottom = j;
            }
            else {
                break;
            }
        }

        if(j_bottom - j_top == 2) {
            if(j_bottom == pj || j_top == pj) {
                for(int i = i_top; i <= i_bottom; i++) {
                    map[i][pj] = 0;
                }
                for(int j = j_top; j <= j_bottom; j++) {
                    map[i_top][j] = 0;
                }

                *score = *score + 5;
                map[pi][pj] = 9;
                return true;
            }
        }

        /*------------------------------*/

        for(int j = pj; j >= 0; j--) {
            if(map[i_bottom][j] == map[pi][pj] && map[pi][pj] != 0) {
                j_top = j;
            }
            else {
                break;
            }
        }

        for(int j = pj; j < 8; j++) {
            if(map[i_bottom][j] == map[pi][pj] && map[pi][pj] != 0) {
                j_bottom = j;
            }
            else {
                break;
            }
        }

        if(j_bottom - j_top == 2) {
            if(j_bottom == pj || j_top == pj) {
                for(int i = i_top; i <= i_bottom; i++) {
                    map[i][pj] = 0;
                }
                for(int j = j_top; j <= j_bottom; j++) {
                    map[i_bottom][j] = 0;
                }

                *score = *score + 5;
                map[pi][pj] = 9;
                return true;
            }
        }
    }

    return false;
}

