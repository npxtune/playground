// Copyright (c) 2023. Created by user khoidiangelo on GitHub.
#include <stdio.h>
#define MAXCHAR 26
#define MAXDIG 10
int main() {
    // 97 -> 122 is a -> c values of corresponding character in int
    // 65 -> 90  is A -> Z values of corresponding character in int
    int c, nother = 0;
    int clength[MAXCHAR], dlength[MAXDIG];
    for (int i = 0; i < MAXCHAR; ++i) {
        clength[i] = 0;
    }
    for (int i = 0; i < MAXDIG; ++i) {
        dlength[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c >= 97 && c <= 122) {
            ++clength[c -  97];
        } else if (c >= 65 && c <= 90) {
            ++clength[c - 65];
        } else if (c >= '0' && c <= '9') {
            ++dlength[c - '0'];
        } else {
            ++nother;
        }
    }
    for (int i = 0; i < MAXCHAR; ++i) {
        printf("%4c%c: ", i + 65, i + 97);
        for (int j = 0; j < clength[i]; ++j) {
            putchar('|');
        }
        printf("\n");
    }
    for (int i = 0; i < MAXDIG; ++i) {
        printf("%5d: ", i);
        for (int j = 0; j < dlength[i]; ++j) {
            putchar('|');
        }
        printf("\n");
    }
    printf("other: ");
    for (int i = 0; i < nother; ++i) {
        putchar('|');
    }
    return 0;
}