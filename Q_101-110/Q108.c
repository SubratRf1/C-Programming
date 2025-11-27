#include <stdio.h>

/*
Q108 (Logic Enhancers)
Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal
to the product of all the elements of nums except nums[i]. The product of any prefix or suffix
of nums is guaranteed to fit in a 32-bit integer.
Follow-up(optional): Can you write a code that runs in O(n) time and without using the division
operation.
*/

int main(void) {
    int n, i;
    int nums[1000];
    long long left[1000], right[1000], ans[1000];

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    left[0] = 1;
    for (i = 1; i < n; i++) {
        left[i] = left[i - 1] * nums[i - 1];
    }

    right[n - 1] = 1;
    for (i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] * nums[i + 1];
    }

    for (i = 0; i < n; i++) {
        ans[i] = left[i] * right[i];
    }

    printf("Result: ");
    for (i = 0; i < n; i++) {
        printf("%lld", ans[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
