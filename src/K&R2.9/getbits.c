unsigned int getbits(unsigned x, int p, int n) {    // from K&R Chapter 2.9
    return (x >> (p+1-n) & ~(~0 << n));
}