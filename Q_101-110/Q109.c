#include <stdio.h>

/*
Q109 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum
of all the subarrays of size k.
*/

int main(void) {
    int n, k, i;
    int arr[1000];
    long long currentSum = 0, maxSum;

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid k\n");
        return 1;
    }

    for (i = 0; i < k; i++) {
        currentSum += arr[i];
    }
    maxSum = currentSum;

    for (i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%lld\n", maxSum);
    return 0;
}
