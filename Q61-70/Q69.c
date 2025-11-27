#include <stdio.h>
#include <limits.h>

/*
Q69 (Arrays (1D))
Find the second largest element in an array.
*/

int main(void) {
    int n, i;
    int arr[100];
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter number of elements (at least 2, max 100): ");
    scanf("%d", &n);

    if (n < 2 || n > 100) {
        printf("Invalid size.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No distinct second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
