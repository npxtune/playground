#include <stdio.h>

 int main() {
     double fahr, celsius;
     int lower = 0, upper = 100, step = 20;

     fahr = lower;
     printf("%3s\t%6s\n","Fahrenheit", "Celsius");
     while (fahr <= upper) {
         celsius = (5.0 / 9.0) * (fahr-32.0);
         printf("%5.0f\t%14.1f\n", fahr, celsius);
         fahr = fahr + step;
     }
     return 0;
 }