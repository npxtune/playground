// Copyright (c) 2023. Created by user khoidiangelo on GitHub.

#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

 // prints values of Fahrenheit and Celsius in a list with decrements of 20 from 300 -> 0

 int main() {
     printf("%3s\t%6s\n","Fahrenheit", "Celsius");
     for (int fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
         printf("%5d\t%14.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
     }
     return 0;
 }
