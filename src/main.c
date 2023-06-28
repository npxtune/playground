#include <stdio.h>
#include <limits.h>
#include <float.h>
void print_using_standard(void) {
    printf("signed char: %d  %d\t\t\t\t\tunsigned char: %u %u\n", SCHAR_MIN, SCHAR_MAX, 0,UCHAR_MAX);
    printf("signed short: %d  %d\t\t\t\tunsigned short: %u %u\n", SHRT_MIN, SHRT_MAX, 0, USHRT_MAX);
    printf("signed int: %d  %d\t\t\tunsigned int: %u %u\n", INT_MIN, INT_MAX, 0, UINT_MAX);
    printf("signed long: %ld  %ld\tunsigned long: %lu %lu\n", LONG_MIN, LONG_MAX, 0l, ULONG_MAX);
    printf("\nfloating point values:\n\n");
    printf("signed float: %g  %g\nunsigned float: %g %g\n", FLT_MIN, FLT_MAX, 0.0f, FLT_TRUE_MIN);
    printf("signed double: %g  %g\nunsigned double: %g %g\n", DBL_MIN, DBL_MAX, 0.0f, DBL_TRUE_MIN);
}
void print_using_computation(void) {
    // TODO
}
int main(void) {
    print_using_standard();
    return 0;
}