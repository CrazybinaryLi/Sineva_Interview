#include "circlenumber.h"
#include <iostream>
#include <iomanip>

#define max(a,b) ((a)<(b)?(a):(b))
#define abs(a) ((a)<0?(a):-(a))

using namespace std;
//loop = 2
/*
21 22 23 24 25
20 07 08 09 10
19 06 01 02 11
18 05 04 03 12
17 16 15 14 13
*/

void help()
{
    cout << "this is a path planning problem, the loop must be larger than 2. thanks" << endl;
    throw new out_of_range("the loop must be larger than 2 and smaller than 50.");
}

circlenumber::circlenumber(int _loop)
{
    if(_loop < 2 || _loop > 49) help();
    loop = _loop;
    center_x = 50;
    center_y = 50;
    ncn[center_x][center_y] = 1;
}

void circlenumber::next(int current_x, int current_y, int index, int current_loop_width, int* n_x, int* n_y) {

    switch(index / current_loop_width) {
        case 0: {
            *n_x  = current_x;
            *n_y  = --current_y;
            break;
        }
        case 1: {
            *n_y  = current_y;
            *n_x  = --current_x;
            break;
        }
        case 2: {
            *n_y  = ++current_y;
            *n_x  = current_x;
            break;
        }
        case 3: {
            *n_y  = current_y;
            *n_x  = ++current_x;
            break;
        }
        default: {  }
    }

}

void circlenumber::fool(int min, int start_x, int start_y, int current_loop_length, int current_loop_width) {
    int nx = start_x, ny = start_y ;
    ncn[start_x][start_y] = min;

    for(int i = 1; i < current_loop_length; i++) {
        next(nx, ny, i, current_loop_width, &nx, &ny);
        ncn[nx][ny] = min+i;
    }
}

void circlenumber::print()
{    
    for (int i=loop;i>0;i--) {
        start_x = center_x + i;
        start_y = center_x + i - 1;
        current_loop_length = (2*i+1)*(2*i+1) - (2*i-1)*(2*i-1);
        min = (2*i+1)*(2*i+1) - current_loop_length + 1;
        current_loop_width = current_loop_length / 4;
        fool(min, start_x, start_y, current_loop_length, current_loop_width);
    }

    for (int i=center_y+loop;i>=center_y - loop;i--) {
        for (int j=center_x-loop;j<=center_x + loop;j++) {
            cout << setw(3) << ncn[j][i] << " ";
        }
        cout << endl;
    }
}
