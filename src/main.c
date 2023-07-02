#include <stdio.h>
int stringlength(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        ++i;
    }
    return i;
}
int main(void) {
    const char testinput[] = "hello, world!\n";
    printf("length: %d\n%s", stringlength(testinput), testinput);
    int conint = 43;
    printf("%d\n", conint);
    return 0;
}