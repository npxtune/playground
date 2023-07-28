#include "setbits.c"
#include <math.h>
unsigned int rightrot (unsigned int x, int n) {
    unsigned int length = (int)log2(x)+1;   // METHOD FOR FINDING BIT LENGTH
    for (int i = 0; i < n; ++i) {
        int temp_b = 0;
        if (getbits(x,0,1) == 1) {
            temp_b = 1;
        }
        x = setbits(temp_b, x >> 1, length, 1);
    }
    return x;
}