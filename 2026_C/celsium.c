#include <stdio.h>

/* Print Fahrenheit- Celsius Table 
    for fahr = 0, 20, ....., 300
*/

int main() {
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("This is Fahrenheit Conversion to Celsius\n");

    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr + step;
    }
}