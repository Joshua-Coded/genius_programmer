/** The Random Function in C**/
// By Joshua Alana
// Date: 21/02/2026
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int iRandomNum = 0;
int iResponse = 0;
srand(time(NULL));

iRandomNum = (rand() % 10) + 1;

printf("\nGuess a number between 1 and 10: ");
scanf("%d", &iResponse);

if (iResponse == iRandomNum)
   printf("\n You guessed Right\n");
else {
	printf("\nSorry, you guessed wrong\n");
	printf("The correct guess was %d\n", iRandomNum);
}


}
