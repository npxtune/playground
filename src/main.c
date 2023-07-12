#include <stdio.h>
#include "readline.c"
#define MAXLINE 1000
void squeeze(char s1[], char s2[]) {
    int i, j, k;
    for (k = 0; s2[k] != '\0'; ++k) {
        for (i = j = 0; s1[i] != '\0'; ++i) {
            if (s1[i] != s2[k]) {
                s1[j++] = s1[i];
            }
        }
    }
    s1[k] = '\0';
}

int any(char s1[], char s2[]) {
    int high = MAXLINE;
    for (int i = 0; s2[i] != '\0'; ++i) {
        for (int j = 0; s1[j] != '\0'; ++j) {
            if (s1[j] == s2[i] && j < high) {
                high = j;
            }
        }
    }
    return ++high; // easier to count up since i starts from 0
}

int main(void) {
    char s1[MAXLINE];
    readline(s1, MAXLINE);
    printf("%d", any(s1, "hello"));
    return 0;
}