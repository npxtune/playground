// Copyright (c) 2023. Created by user khoidiangelo on GitHub.
#include <stdio.h>
#include "power.c"
int main() {
    for (int i = 1; i <= 10; ++i) {
        printf("%d\n", power(2, i));
    }
    return 0;
}