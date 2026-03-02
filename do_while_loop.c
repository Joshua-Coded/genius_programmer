#include <stdio.h>

int main(){
    int x = 0;

    do {
        printf("This printf statement is executed at least once\n");
        x++;
    } while (x < 10);


    while (x < 10) {
        printf("This printf statement is never executed\n");
        x++;
    }
}