#include "getbits.c"
unsigned int setbits(unsigned int y, unsigned int x, int p, int n) {
    unsigned int y_bits = getbits(y, n-1, n);   // get bits to be replaced
    unsigned bitmask = (~(~0 << n)) << (p-n);   // create mask to reset bits to be replaced
    y_bits = y_bits << (p-n);   // move bits from y to max p position
    x = ((x | bitmask) ^ bitmask) | y_bits;    // set bits in x to be replaced to 0 & replace bits with y
    return x;
}