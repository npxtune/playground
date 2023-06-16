// Copyright (c) 2023. Created by user khoidiangelo on GitHub.

#include <stdio.h>

// tab, backspace, backslash

int main() {
    int ch;
    while ((ch = getchar()) != EOF) {
        switch (ch) {
            case '\t':
                printf("\\t");
                break;
            case '\\':
                printf("\\\\");
                break;
            case '\b':
                printf("\\b");
                break;
            default:
                putchar(ch);
                break;
        }
    }
    return 0;
}