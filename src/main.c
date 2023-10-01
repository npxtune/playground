#include <stdio.h>
#include "K&RC3/binsearch.c"
#define MAX 100
int main(void) {
    int x = 100;
    int v[MAX];
    for (int i = 0; i < MAX; ++i) {
        v[i] = i;
    }
    printf("%d", binsearch(x, v, MAX));
    return 0;
}