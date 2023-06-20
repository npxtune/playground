// Copyright (c) 2023. Created by user khoidiangelo on GitHub.
#include <stdio.h>
#define MAXLINE 1000

int getlin(char s[], int lim) {
    int i, c, w;
    for (i = 0; i < lim-1 && (c= getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}

void ca() {
    int len = 0, max = 0;
    char line[MAXLINE], longest[MAXLINE];
    while ((len = getlin(line, MAXLINE)) > 0) {
//  EXERCISE 1-16 K&R ------------------------------
//        if (line[len-1] == '\n') {
//            printf("length: %d\n", len);
//        } else {
//            while (getchar() != '\n') {
//                ++len;
//            }
//            ++len;
//            printf("\nlength: %d", len);
//        }
//
//  EXERCISE 1-17 K&R ------------------------------
//        if (len >= 80) {
//            printf("longer than 80 characters: %s", line);
//        }
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
    }
}

// K&R 1-18
int input_without_whitespace(char s[], int len) {
    char temp[MAXLINE];
    int t = 0;
    for (int i = 0; s[i] != '\n' && i != MAXLINE-1; ++i) {
        if (s[i] == ' ' || s[i] == '\t')
            ;
        else {
            temp[t] = s[i];
            ++t;
        }
    }
    for (int i = 0; i <= len; ++i) {
        s[i] = '\0';
    }
    for (int i = 0; i <= t; ++i) {
        s[i] = temp[i];
    }
    return t;
}

// K&R 1-19
void reverse(char s[], int len) {
    char temp[MAXLINE];
    int t = 0;
    for (int i = len-2; i >= 0; --i) {
        temp[t] = s[i];
        ++t;
    }
    for (int i = 0; i <= t; ++i) {
        s[i] = temp[i];
    }
    s[len-1] = '\n'; //fix nextline and null character at end of string
    s[len] = '\0';
}

int main() {
//    K&R 1-18
//    char testi[MAXLINE];
//    int length = getlin(testi, MAXLINE);
//    input_without_whitespace(testi, length);
//    printf("%s\n", testi);
//  ---------------------------------------------
//    K&R 1-19
//    char testi[MAXLINE];
//    int len;
//    while ((len = getlin(testi, MAXLINE)) > 0) {
//        printf("%s", testi);
//        reverse(testi, len);
//        printf("%s", testi);
//    }
//    return 0;
}