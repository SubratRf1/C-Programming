#include <stdio.h>

/*
Q102 (Logic Enhancers)
Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based)
of the smallest element in arr[] that is greater than or equal to x and print it. This element is
called the ceil of x. If such an element does not exist, print -1. In case of multiple occurrences
of ceil of x, return the index of the first occurrence.
Follow-up(optional): Can you do it in O(log n) Time Complexity?
*/

int main(void) {
    int n, i, x;
    int arr[1000];

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1, mid;
    int ans = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = mid;       /* possible ceil, but try for earlier index */
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    printf("%d\n", ans);
    return 0;
}
