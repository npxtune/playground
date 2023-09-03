#include <ctype.h>
void lower(char input[]) {
    for (int i = 0; input[i] != '\n'; ++i) {
        input[i] = (isupper(input[i])) ? tolower(input[i]) : input[i];
    }
}