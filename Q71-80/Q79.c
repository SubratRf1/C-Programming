#include <stdio.h>

/*
Q79 (2D Arrays)
Perform diagonal traversal of a matrix.
Here we print all diagonals of an n x m matrix starting from the first row.
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

    printf("Diagonal traversal:\n");

    // Upper half (including main diagonal)
    for (int d = 0; d < cols; d++) {
        i = 0;
        j = d;
        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    // Lower half
    for (int d = 1; d < rows; d++) {
        i = d;
        j = cols - 1;
        while (i < rows && j >= 0) {
            printf("%d ", a[i][j]);
            i++;
            j--;
        }
        printf("\n");
    }

    return 0;
}
