#include <stdio.h>
#include "K&RC3/escape.c"
#include "readline.c"
#define MAX 1000
int main(void) {
    char s[MAX], t[MAX];
    readline(t, MAX);
    escape(s, t, false);
    printf("%s%s", t, s);
    return 0;
}