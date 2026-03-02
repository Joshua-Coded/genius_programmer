#include <stdio.h>

int main() {
    int x = 1;
    int y = 2;

    x = y * x + 1;
    printf("\nThe value of X is : %d\n", x);

    x = 1;
    y = 2;

    x += y * x + 1;
    printf("\n The value of x right now is: %d\n", x);
}