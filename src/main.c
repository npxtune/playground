#include <stdio.h>

int main(void) {
    int bitop = 1 << 4;
    int bitint = 0b10000;
    printf("%d\n%d", bitop, bitint);
    return 0;
}