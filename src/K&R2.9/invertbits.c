#include "setbits.c"
unsigned int invertbits(unsigned int x, int p, int n) {
    return setbits(getbits(~x, p-1, n), x, p, n);
}