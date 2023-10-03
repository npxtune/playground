#include <ctype.h>
#include <stdio.h>
void expand(char s1[], char s2[]) {
    char first_char = '\0';
    bool found_dash;
    for (int i = 0; s1[i] != '\0'; ++i) {
        if (tolower(s1[i]) >= 'a' && tolower(s1[i] <= 'z')) {
            if (first_char == '\0') {
                first_char = s1[i];
            }   else {
                // TODO IMPLEMENT TILL CHAR
                first_char = s1[i];
                found_dash = false;
            }
        } else if (s1[i] == '-') {
            found_dash = true;
            printf("found dash");
        }
    }
}