// Copyright (c) 2023. Created by user khoidiangelo on GitHub.

#include <stdio.h>
int main() {
    // 97 -> 122 is a -> c
    // 65 -> 90 is A -> Z
    int c, nwhite = 0;
    int clength[25], dlength[9];
    for (int i = 0; i < 25; ++i) {
        clength[i] = 0;
    }
    for (int i = 0; i < 9; ++i) {
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
            ++nwhite;
        }
    }
    for (int i = 0; i < 25; ++i) {
        printf("%4c%c: ", i + 65, i + 97);
        for (int j = 0; j < clength[i]; ++j) {
            putchar('|');
        }
        printf("\n");
    }
    for (int i = 0; i < 9; ++i) {
        printf("%5d: ", i);
        for (int j = 0; j < dlength[i]; ++j) {
            putchar('|');
        }
        printf("\n");
    }
    printf("space: ");
    for (int i = 0; i < nwhite; ++i) {
        putchar('|');
    }
    return 0;
}