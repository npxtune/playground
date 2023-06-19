// Copyright (c) 2023. Created by user khoidiangelo on GitHub.
int power (int base, int n) {
    int i;
    for (i = 1; n > 0; --n) {
        i = i * base;
    }
    return i;
}