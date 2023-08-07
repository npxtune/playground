#include <stdio.h>
#include "K&R2.9/rightrot.c"
int main(void) {
    printf("%d\n", 0b1010110);
    printf("%d\n", rightrot(0b1010110, 7));
    printf("\n");
    printf("%d\n", 0b111010);
    printf("%d\n", rightrot(0b101011, 2));
    return 0;
}