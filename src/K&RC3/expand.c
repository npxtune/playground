#include <ctype.h>
#include <stdio.h>
void expand(char s1[], char s2[]) {
    char new_char = '\0', previous_char = '\0';
    bool found_dash;
    int index2 = 0;
    for (int i = 0; s1[i] != '\0'; ++i) {
        if (tolower(s1[i]) >= 'a' && tolower(s1[i] <= 'z')) {       // CHARACTER DETECTION
            if (new_char == '\0') {
                new_char = s1[i];
            } else if (found_dash) {
                previous_char = s1[i];
                for (char j = new_char; tolower(j) - '1' != tolower(previous_char) - '0'; ++j, ++index2) {
                    s2[index2] = j;
                }
                new_char = previous_char;
                s2[index2++] = '\n';
                found_dash = false;
            }
        } else if (s1[i] >= '0' && s1[i] <= '9') {      // DIGIT DETECTION
            if (new_char == '\0') {
                new_char = s1[i];
            } else if (found_dash) {
                previous_char = s1[i];
                for (char j = new_char; j != '9' + 1; ++j, ++index2) {
                    s2[index2] = j;
                }
                new_char = previous_char;
                s2[index2++] = '\n';
                found_dash = false;
            }
        } else if (s1[i] == '-') {
            found_dash = true;
        }
    }
}