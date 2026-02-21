/** The switch statement implementation in C */
// By Joshua Alana
// Date 21/02/2026

#include <stdio.h>

int main(){
int iResponse = 0;

printf("\n1\tSports\n");
printf("\n2\tGeography\n");
printf("\n3\tMusic\n");
printf("\n4\tWorld Events\n");
printf("\nPlease select a category (1-4): \n");
scanf("%d", &iResponse);

switch(iResponse){
      case 1:
	   printf("\nYou Selected sports Questions\n");
	break;
	case 2:
	     printf("You selected geography questions\n");
	break;
	case 3:
	     printf("You selected music questions\n");
	break;	
	case 4:
	     printf("You selected world events questions\n");
	break;
	default:
		printf("Invalid category\n");
}

}
