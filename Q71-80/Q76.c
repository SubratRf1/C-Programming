#include <stdio.h>

/*
Q76 (2D Arrays)
Check if a matrix is symmetric.
A matrix is symmetric if it is square and a[i][j] == a[j][i] for all i, j.
*/

int main(void) {
    int n, i, j;
    int a[10][10];
    int symmetric = 1;

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
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
