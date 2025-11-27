#include <stdio.h>

/*
Q66 (Arrays (1D))
Insert an element in a sorted array at the appropriate position.
*/

int main(void) {
    int n, i, x;
    int arr[101]; // one extra space for insertion

    printf("Enter number of elements in sorted array (max 100): ");
    scanf("%d", &n);

    if (n < 0 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements in sorted (ascending) order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    // Find position to insert
    int pos = n;
    for (i = 0; i < n; i++) {
        if (arr[i] > x) {
            pos = i;
            break;
        }
    }

    // Shift elements right
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
