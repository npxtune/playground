#include <stdio.h>
#include "K&RC3/expand.c"
#include "readline.c"
#define MAX 1000
int main(void) {
    char s1[MAX], s2[MAX];
    for (int i = 0; i < MAX-1; ++i) {
        s1[i] = '\0', s2[i] = '\0';
    }
    readline(s1, MAX);
    expand(s1, s2);
    printf("%s", s2);
    return 0;
}