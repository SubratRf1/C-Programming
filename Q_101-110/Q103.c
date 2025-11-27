#include <stdio.h>

/*
Q103 (Logic Enhancers)
Write a Program to take an array of integers as input, calculate the pivot index of this array.
The pivot index is the index where the sum of all the numbers strictly to the left of the index
is equal to the sum of all the numbers strictly to the index's right. If the index is on the left
edge of the array, then the left sum is 0. Similarly for the right edge. Print the leftmost pivot
index. If no such index exists, print -1.
Follow-up(optional): Try to solve this in O(n) TC.
*/

int main(void) {
    int n, i;
    int nums[1000];
    long long total = 0, leftSum = 0;

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        total += nums[i];
    }

    for (i = 0; i < n; i++) {
        long long rightSum = total - leftSum - nums[i];
        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }
        leftSum += nums[i];
    }

    printf("-1\n");
    return 0;
}
