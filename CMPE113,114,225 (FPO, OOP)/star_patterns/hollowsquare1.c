#include <stdio.h>

/*
 * Takes row number as input
 * Takes column number as input
 * Prints Hollow square with stars:
 *     Example:
 *        *********
 *        *       *
 *        *       *
 *        *       *
 *        *********
 */




int main(void){
    int i, j, row, column;

    printf("Rows: \n"); scanf("%d", &row);
    printf("Columns:\n"); scanf("%d", &column);

    // Rows
    for (i=1; i<=row; i++){
        printf("\n");
        // Columns
        for (j=1; j<=column; j++){
            if(i==1 || i==row || j==1 || j==column){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
    }
    printf("\n");
    return 0;
}