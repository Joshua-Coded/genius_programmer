/** The cookies program that uses switch and random generation technique */
// By Joshua Alana
// Date : 21/02/2026

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int iRandomNum = 0;
srand(time(NULL));

printf("\nFortune Cookie - Chapter 2\n");

switch(iRandomNum){
	case 1:
	   printf("\nYou will meet a new friend today.\n");
	break;
	case 2:
	     printf("\nYou will enjoy a long and happy life. \n");
	break;
	case 3:
	printf("\nOpportunity knocks softly. Can you hear it?\n");
	break;
	default:
	printf("\nNot lucky enough\n");

}

printf("\nLucky lotto numbers: ");
printf("%d", (rand() % 49) + 1);
printf("%d", (rand() % 49) + 1);
printf("%d", (rand() % 49) + 1);
printf("%d", (rand() % 49) + 1);
printf("%d", (rand() % 49) + 1);
printf("%d\n", (rand() % 49) + 1);
}
