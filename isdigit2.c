/** The conventional way of using isdigt  in C */
// by Joshua Alana
// Date: 21/02/2026

#include <stdio.h>
#include <ctype.h>


int main(){
char cResponse = '\0';

printf("\nPlease Enter a digit: ");
scanf("%c", &cResponse);

if (isdigit(cResponse)) {
   printf("\nThank you\n");
}
else
   printf("\nYou did not enter a digit\n");

}
