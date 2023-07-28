#include "setbits.c"
unsigned int rightrot (unsigned int x, int n) {
    for (int i = 0; i < n; ++i) {
        int temp_b = 0;
        if (getbits(x,0,1) == 1) {
            temp_b = 1;
        }
        x = x >> 1;
        x = setbits(temp_b, x, 6, 1); // TODO:  FIND METHOD FOR POSITION LAST BIT   !!! floor(log2(x)) + 1
    }
    return x;
}