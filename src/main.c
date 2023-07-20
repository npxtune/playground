#include <stdio.h>
#include "K&R2.9/invertbits.c"
int main(void) {
    printf("%d\n", invertbits(0b101110, 6, 3));
    printf("%d\n", 0b010110); //FOR DEBUGGING
    return 0;
}