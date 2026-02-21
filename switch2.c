/** The switch statement with character */
// By Joshua Alana
// Date: 21/02/2026

#include <stdio.h>

int main(){

char cResponse = '\0';

printf("\n Welcome to test Character\n");
printf("\nSelect a letter from this range (a-c): ");
printf("\n\tEnter a: ");
printf("\n\tEnter b: ");
printf("\n\tEnter C: ");
scanf("%c", &cResponse);


switch(cResponse){

   case 'a': case 'A':
       printf("\n You Selected the character a or A\n");
   break;
   case 'b': case 'B':
	printf("\nYou selected the character b or B\n");
	break;
case 'c': case 'C':
	printf("\nYou selected the character c or C\n");
break;
default:
printf("That was wrong\n");	

}
}
