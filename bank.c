/** A banking app simulation */
// By Joshua Alana
// Date: 21/02/2026

#include <stdio.h>

int main(){

int iSelection = 0;
float fTransAmount = 0.0;
float fBalance = 100.25;

printf("\n\tATM\n");
printf("\n\tWithdraw Funds\n");
printf("\nEnter your selection: ");
scanf("%d", &iSelection);

if (iSelection == 1) {
   printf("\n Enter fund amount to deposit: ");
   scanf("%f", &fTransAmount);
   printf("\nYour new balance is: $%.2f\n", fBalance + fTransAmount);
}

if (iSelection == 2){
   printf("\n Enter fund amount to withdraw: "); 
   scanf("%f", &fTransAmount);
   
   if (fTransAmount > fBalance)
      printf("\nInsufficient funds\n");
   else
      printf("\n Your new balance is $%.2f\n", fBalance - fTransAmount);
}

}
