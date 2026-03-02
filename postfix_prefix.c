#include <stdio.h>

// int main() {
//     int y = 0;
//     int x = 0;

//     printf("\nThe value of y is %d\n", y++);
//     printf("\nThe value of x is %d\n", ++x);
// }


    // int x = 5;
    // int y = 5;

    // x = y++ * 2;
    // printf("\nThe value of X is: %d\n", x);

    // x = 0;
    // y = 1;

    // x = ++y * 2;
    // printf("\nThe value of X is: %d\n", x); 

    int main(){
        // int x = 0;
        // int y = 0;

        // x = y++ * 4;
        // printf("\nThe value of X is: %d\n", x);

        // x = ++y * 4;
        // printf("\nThe value of X is now %d\n", x);

        int x = 1;
        int y = 1;

        x = y-- * 4;
        printf("\nThe value of X is %d\n", x);

        y = 1;

        x = --y * 4;
        printf("\nThe value of x is now %d\n", x);
    }
