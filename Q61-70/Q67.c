#include <stdio.h>

/*
Q67 (Arrays (1D))
Insert an element in an array at a given position.
*/

int main(void) {
    int n, i, x, pos;
    int arr[101]; // extra space for insertion

    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position.\n");
        return 1;
    }

    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
