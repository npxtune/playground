// Copyright (c) 2023. Created by user khoidiangelo on GitHub.

#include "getbits.c"
unsigned int setbits(unsigned int y, unsigned int x, int p, int n) {
    unsigned int y_bits = getbits(y, n-1, n);   // get bits to be replaced
    y_bits = y_bits << (p-n);   // move bits to max p & create mask for replacement
    x = x | y_bits;             // replace bits
    return x;
}