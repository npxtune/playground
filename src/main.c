#include <stdio.h>
#include "setbits.c"
int main(void) {
    printf("%d\n", setbits(0b000100, 0b000001, 5, 3));
    //    printf("%d\n", 0b10001); FOR DEBUGGING
    return 0;
}