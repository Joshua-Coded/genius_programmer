#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int x, iNumberQuestions, iResponse, iRndNum1, iRndNum2;
    srand(time(NULL));

    printf("\n Enter number of questions to ask: ");
    scanf("%d", &iNumberQuestions);

    for ( x = 0; x < iNumberQuestions; x++){
        iRndNum1 = rand() % 10 + 1;
        iRndNum2 = rand() % 10 + 1;
    
        printf("\nWhat is %d x %d: ", iRndNum1, iRndNum2);
        scanf("%d", &iResponse);

        if (iResponse == iRndNum1 * iRndNum2)
            printf("\nCorrect!\n");
        else 
            printf("\nThe correct answer was %d \n", iRndNum1 * iRndNum2);
    }
}