#include <stdio.h>

/*
Q63 (Arrays (1D))
Merge two arrays.
*/

int main(void) {
    int n1, n2, i;
    int a[100], b[100], c[200];

    printf("Enter size of first array (max 100): ");
    scanf("%d", &n1);
    if (n1 < 0 || n1 > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements for first array:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second array (max 100): ");
    scanf("%d", &n2);
    if (n2 < 0 || n2 > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements for second array:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    // Merge a and b into c
    for (i = 0; i < n1; i++) {
        c[i] = a[i];
    }
    for (i = 0; i < n2; i++) {
        c[n1 + i] = b[i];
    }

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    return 0;
}
