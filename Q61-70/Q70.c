#include <stdio.h>

/*
Q70 (Arrays (1D))
Rotate an array to the right by k positions.
*/

int main(void) {
    int n, i, k;
    int arr[100];

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k (number of positions to rotate right): ");
    scanf("%d", &k);

    if (n > 0) {
        k = k % n;
    }

    while (k-- > 0) {
        int last = arr[n - 1];
        for (i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
