// Copyright (c) 2023. Created by user khoidiangelo on GitHub.

#include <stdio.h>

int main() {
    int c, cl = 0, nc = 0;
    while ((c = getchar()) != EOF) {
        ++cl;
        if (c == '\n') {
            ++nc;
        }
    }
    printf("characters:%d\nnew lines: %d\n", cl, nc);
    return 0;
}