#include <stdio.h>

/* This is the opposite of the fahrenheit to celsius*/

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = -10;
    upper = 101;
    step = 10;

    celsius = lower;

    while (celsius <= upper) {
        fahr = (celsius * 9/5) + 32;
        printf("%.2f\t%.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

}