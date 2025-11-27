#include <stdio.h>

/*
Q65 (Arrays (1D))
Search in a sorted array using binary search.
*/

int main(void) {
    int n, i, key;
    int arr[100];

    printf("Enter number of elements in sorted array (max 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements in sorted (ascending) order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, pos = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            pos = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (pos == -1) {
        printf("%d not found in the array.\n", key);
    } else {
        printf("%d found at index %d.\n", key, pos);
    }

    return 0;
}
