#include <stdio.h>

/*
Q61 (Arrays (1D))
Search for an element in an array using linear search.
*/

int main(void) {
    int n, i, key, pos = -1;
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

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;  // 0-based index
            break;
        }
    }

    if (pos == -1) {
        printf("%d not found in the array.\n", key);
    } else {
        printf("%d found at index %d.\n", key, pos);
    }

    return 0;
}
