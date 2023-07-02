#include <stdio.h>
int stringlength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}
void is_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year!\n", year);
    }
}
int main(void) {
    const char testinput[] = "hello, world!\n";
    printf("length: %d\n%s", stringlength(testinput), testinput);
    is_leap_year(2024);
    return 0;
}