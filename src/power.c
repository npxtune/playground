// Copyright (c) 2023. Created by user khoidiangelo on GitHub.
//
// Created by Tim Horochowik on 20.06.23.
//

int power (int base, int n) {
    int i;
    for (i = 1; n > 0; --n) {
        i = i * base;
    }
    return i;
}