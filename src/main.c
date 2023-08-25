#include <stdio.h>
#include "K&R2.11/lower.c"
#include "readline.c"
#define MAXLINE 1000
int main(void) {
    char input[MAXLINE];
    readline(input, MAXLINE);
    lower(input);
    printf("%s", input);
    return 0;
}