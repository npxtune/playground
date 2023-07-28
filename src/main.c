#include <stdio.h>
#include "K&R2.9/rightrot.c"
int main(void) {
    printf("%d\n", 0b101010);
    printf("%d\n", rightrot(0b010101, 1));
    printf("%d\n", 0b010101); //FOR DEBUGGING
    return 0;
}