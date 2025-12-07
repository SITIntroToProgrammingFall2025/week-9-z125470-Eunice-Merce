/*
Merce Eunice
z125470
class : 03/12/2025
*/

#include <stdio.h>

int main() {
    int a[2][2];
    int i,j;
    double determinant;

    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 2; j++) {
            printf("enter the elements for arrya [%d][%d] = ", i, j);
            scanf("%d", &a[i-1][j-1]);
        }
    }


    printf("You entered \n");
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 2; j++) {
            printf("%d ",a[i-1][j-1]);
        }
        printf("\n");
    }


    determinant = a[0][0]*a[1][1]-a[1][0]*a[0][1];
    printf("Determinant is %f", determinant);

    return 0;
}


