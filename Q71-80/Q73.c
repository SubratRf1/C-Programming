#include <stdio.h>

/*
Q73 (2D Arrays)
Find the sum of each row of a matrix and store it in an array.
*/

int main(void) {
    int rows, cols, i, j;
    int a[10][10];
    int rowSum[10];

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

    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++) {
            rowSum[i] += a[i][j];
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i, rowSum[i]);
    }

    return 0;
}
