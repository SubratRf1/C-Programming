#include <stdio.h>

/*
Q78 (2D Arrays)
Find the sum of main diagonal elements for a square matrix.
*/

int main(void) {
    int n, i, j;
    int a[10][10];
    int sum = 0;

    printf("Enter order of square matrix (n, max 10): ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Invalid order.\n");
        return 1;
    }

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
            if (i == j) {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);

    return 0;
}
