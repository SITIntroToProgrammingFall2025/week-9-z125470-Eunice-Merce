/*
Merce Eunice
z125470
class : 03/12/2025
*/

#include <stdio.h>

int main() {
    float a[2][3], b[3][2], AB[2][2];
    int i,j,k;

    // Matrice a
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            //printf("enter the elements for array a[%d][%d] = ", i, j);
            scanf("%f", &a[i-1][j-1]);
        }
    }

    // Matrice b
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 2; j++) {
            //printf("enter the elements for array b[%d][%d] = ", i, j);
            scanf("%f", &b[i-1][j-1]);
        }
    }


    //Print Matrix a
    printf("The first matrix you entered is\n");
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 3; j++) {
            printf("%g ",a[i-1][j-1]);
        }
        printf("\n");
    }

    //Print Matrix b
    printf("The second matrix you entered is\n");
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 2; j++) {
            printf("%g ",b[i-1][j-1]);
        }
        printf("\n");
    }

    //Matrice AB
    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            AB[i-1][j-1] = 0;
            for (k=0; k<=2; k++){
                AB[i-1][j-1] += a[i-1][k]*b[k][j-1];
            }
        }
    }

    //Print Matrix AB
    printf("The multiplication product of matrix A and matrix B:\n");
    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 2; j++) {
            printf("%g ",AB[i-1][j-1]);
        }
        printf("\n");
    }


    return 0;
}
