#include <stdio.h>
#include "K&R2.9/setbits.c"
int main(void) {
    printf("%d\n", setbits(0b000101, 0b011001, 4, 3));
    printf("%d\n", 0b011011); //FOR DEBUGGING
    return 0;
}