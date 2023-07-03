#include <stdio.h>
int readline(char s[], int length) {    // rewritten for K&R2-2
    int i, c;
    for (i = 0; i < length-1; ++i) {
        if ((c = getchar()) != EOF) {
            if (c != '\n') {
                s[i] = c;
            } else {
                break;
            }
        } else {
            break;
        }
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}