#include <stdio.h>

/*
Q101 (Logic Enhancers)
Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs.
The elements in the sorted array might be repeated. You need to print the first and last
occurrence of the target and print the index of first and last occurrence. Print "-1 -1"
if the target is not present.
Follow-up(optional): Can you do it in O(log n) Time Complexity?
*/

int main(void) {
    int n, i, target;
    int nums[1000];

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int low, high, mid;
    int first = -1, last = -1;

    /* Find first occurrence using binary search */
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (nums[mid] == target) {
            first = mid;
            high = mid - 1;  /* search on left side */
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    /* Find last occurrence using binary search */
    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (nums[mid] == target) {
            last = mid;
            low = mid + 1;   /* search on right side */
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d %d\n", first, last);
    return 0;
}
