#include <stdio.h>

/*
Q77 (2D Arrays)
Check if the elements on the diagonal of a matrix are distinct.
*/

int main(void) {
    int n, i, j;
    int a[10][10];
    int distinct = 1;

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

    // Check main diagonal elements for distinctness
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct) {
        printf("All main diagonal elements are distinct.\n");
    } else {
        printf("Main diagonal elements are not distinct.\n");
    }

    return 0;
}
