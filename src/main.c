// Copyright (c) 2023. Created by user khoidiangelo on GitHub.
#include <stdio.h>

int power (int base, int n) {
    int i;
    for (i = 1; n > 0; --n) {
        i = i * base;
    }
    return i;
}
int main() {
    for (int i = 1; i <= 10; ++i) {
        printf("%d\n", power(2, i));
    }
    return 0;
}