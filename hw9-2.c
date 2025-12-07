/*
Merce Eunice
z125470
class : 03/12/2025
*/

#include <stdio.h>

int main() {
    int a[3][3];
    int i,j;
    double determinant;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            scanf("%d", &a[i-1][j-1]);
        }
    }


    printf("You entered\n");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%d ",a[i-1][j-1]);
        }
        printf("\n");
    }

    printf("Output\n");
    for (i = 1; i <= 3; i++) {
        for (j = 3; j >= 1; j--) {
            printf("%d ",a[i-1][j-1]);
        }
        printf("\n");
    }

    return 0;
}




