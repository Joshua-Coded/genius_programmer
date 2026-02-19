#include <stdio.h>

int main(){

int iResponse = 0;

printf("\n\tAC Control Unit");
printf("\n1\tTurn AC ON");
printf("\n2\t TURN AC OFF");
scanf("%d", &iResponse);


if (iResponse == 1){
   printf("\n AC IS on now!!!");
}

if (iResponse == 2) {
   printf("\n AC IS OFF NOW!");
}

}
