#include <stdio.h>

/*
Q75 (2D Arrays)
Add two matrices.
*/

int main(void) {
    int rows, cols, i, j;
    int a[10][10], b[10][10], c[10][10];

    printf("Enter number of rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &cols);

    if (rows < 1 || rows > 10 || cols < 1 || cols > 10) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    printf("Enter elements of first %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second %d x %d matrix:\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
