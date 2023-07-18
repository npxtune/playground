#include "getbits.c"
unsigned int setbits(unsigned int y, unsigned int x, int p, int n) {
    unsigned int y_bits = getbits(y, n-1, n);
    y_bits = y_bits << (p);
    x = x | y_bits;
    return x;
}