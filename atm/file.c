#include <stdio.h>

int main(){

    int iSelection = 0;

    while (iSelection != 4) {
        printf("1\tDeposit funds\n");
        printf("2\tWithdraw funds\n");
        printf("3\tPrint Balance\n");
        printf("4\tQuit\n");
       scanf("%d", &iSelection);
    }

    printf("\nThank you\n");
}