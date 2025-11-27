#include <stdio.h>

/*
Q80 (2D Arrays)
Multiply two matrices.
*/

int main(void) {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], c[10][10];

    printf("Enter rows and columns of first matrix (max 10 10): ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix (max 10 10): ");
    scanf("%d %d", &r2, &c2);

    if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
        r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10) {
        printf("Invalid dimensions.\n");
        return 1;
    }

    if (c1 != r2) {
        printf("Matrix multiplication not possible (c1 must equal r2).\n");
        return 1;
    }

    printf("Enter elements of first matrix (%d x %d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix (%d x %d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize result matrix
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            c[i][j] = 0;
        }
    }

    // Multiply
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
