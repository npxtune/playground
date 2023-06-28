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
    printf("signed char: %d  %d\t\t\t\t\tunsigned char: %u %u\n", -(1 << 7), (1 << 7) -1, 0 , (1 << 8)-1);
    printf("signed short: %d  %d\t\t\t\tunsigned short: %u %u\n", -(1 << 15), (1 << 15)-1, 0, (1 << 16)-1);
    printf("signed int: %d  %d\t\t\tunsigned int: %u %u\n", -(1 << 31), (1 << 31)-1, 0, (1u >> 31u)-1u);
    printf("signed long: %ld  %ld\tunsigned long: %lu %lu\n\n", -(1l << 63l), (1l << 63l)-1l, 0l, (1l >> 31)-1);
    // Yes I am a maniac I did not use math.c :)
}
int main(void) {
    print_using_computation();
    print_using_standard();
    return 0;
}