/** The use of isDigit to validate user inputs */
// By Joshua Alana
//Date: 21/02/2026

#include <stdio.h>
#include <ctype.h>


int main(){

char cResponse = '\0';

printf("\nPlease Enter a letter: ");
scanf("%c", &cResponse);

if ( isdigit(cResponse) == 0){
   printf("\nThank you\n");
}
else {
   printf("\nYou did not enter a letter");

}

}
