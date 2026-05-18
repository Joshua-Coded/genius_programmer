#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* Print Fahrenheit- Celsius Table 
    for fahr = 0, 20, ....., 300
*/

int main() {
    int fahr, celsius;

    fahr = UPPER;

    printf("This is Fahrenheit Conversion to Celsius\n");

    while (fahr >= LOWER) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t%6d\n", fahr, celsius);
        fahr = fahr - STEP;
    }
}