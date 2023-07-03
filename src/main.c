#include <stdio.h>
#include "readline.c"
#define MAXLINE 1000
int stringlength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}
void is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year!\n", year);
    }
}
int main(void) {
    char line[MAXLINE];
    readline(line, MAXLINE);
    printf("%s", line);
    return 0;
}