#include <stdio.h>

/*
Q71 (2D Arrays)
Read and print a matrix.
*/

int main(void) {
    int rows, cols, i, j;
    int a[10][10];

    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    printf("Enter elements of %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
