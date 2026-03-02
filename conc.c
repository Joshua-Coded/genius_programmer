#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    char cYesNo = '\0';
    int iRes1 = 0;
    int iRes2 = 0;
    int iRes3 = 0;
    int iElaspedTime = 0;
    int iCurrentTime = 0;
    int iRandomNum = 0;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    int iCounter = 0;

    srand(time(NULL));

    printf("\nPlay a game of concentration? (y or n): ");
    scanf("%c", &cYesNo);

    if(cYesNo == 'y' || cYesNo == 'Y') {
        i1 = rand() % 100;
        i2 = rand() % 100;
        i3 = rand() % 100;

        printf("\nConcentration on the next three numbers\n");
        printf("\n%d\t%d\t%d\n", i1, i2, i3);

        iCurrentTime = time(NULL);

        do {
            iElaspedTime = time(NULL);
        } while ( (iElaspedTime - iCurrentTime) < 3);

        system("clear");

        printf("\nEnter each # separated with one space: ");
        scanf("%d%d%d", &iRes1, &iRes2, &iRes3);

        if (i1 == iRes1 && i2 == iRes2 && i3 == iRes3)
        printf("Congratulations!\n");
    }

}