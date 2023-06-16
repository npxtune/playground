// Copyright (c) 2023. Created by user khoidiangelo on GitHub.

#include <stdio.h>
#define IN 1
#define OUT 0

// program that prints input one word per line

int main() {
    int c, state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                putchar('\n');
            }
        } else {
            state = IN;
            putchar(c);
        }
    }
    return 0;
}