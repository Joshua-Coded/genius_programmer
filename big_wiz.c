/* The big wiz program in C */
// By Joshua Alana
// Date : 18/02/2026

#include <stdio.h>

int main(){

float fRevenue, fCost;

fRevenue = 0;
fCost = 0;

/* Profit = Revenue  - Cost */

printf("\n Enter Total Revenue: \n");
scanf("%f", &fRevenue);

printf("\n Enter total Cost: \n");
scanf("%f", &fCost);

printf("Total Profit is $%.2f\n", fRevenue - fCost);
}
