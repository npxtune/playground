// Copyright (c) 2023. Created by user khoidiangelo on GitHub.

#include <stdio.h>
#define MAXWORDS 256
#define IN 1
#define OUT 0

int main() {
    int c, state = OUT, wlength = 0;
    int alength[MAXWORDS];
    for (int i = 0; i < MAXWORDS; ++i) {
        alength[i] = 0;
    }
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                state = OUT;
                ++alength[wlength];
                wlength = 0;
            }
        } else {
            state = IN;
            ++wlength;
        }
    }
    for (int i = 0; i < MAXWORDS; ++i) {
        if (alength[i] != 0) {
            printf("%3d: ", i);
            for (int j = 0; j < alength[i]; ++j) {
                printf("|");
            }
            printf("\n");
        }
    }
    return 0;
}