#include <stdio.h>

/*
Q72 (2D Arrays)
Find the sum of all elements in a matrix.
*/

int main(void) {
    int rows, cols, i, j;
    int a[10][10];
    int sum = 0;

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
            sum += a[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
