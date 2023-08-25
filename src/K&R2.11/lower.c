#include <ctype.h>
int lower(char input[]) {
    for (int i = 0; input[i] != EOF; ++i) {
        input[i] = (isupper(input[i])) ? tolower(input[i]) : input[i];
    }
    return 0;
}