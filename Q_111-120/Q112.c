#include <stdio.h>

/*
Q112 (Logic Enhancers)
Write a program to take an integer array arr as input. The task is to find the maximum sum of any
contiguous subarray using Kadane's algorithm. Print the maximum sum as output.
If all elements are negative, print the largest (least negative) element.
*/

int main(void) {
    int n, i;
    int arr[1000];
    long long maxEndingHere, maxSoFar;

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    maxEndingHere = maxSoFar = arr[0];
    for (i = 1; i < n; i++) {
        if (maxEndingHere + arr[i] < arr[i]) {
            maxEndingHere = arr[i];
        } else {
            maxEndingHere += arr[i];
        }
        if (maxEndingHere > maxSoFar) {
            maxSoFar = maxEndingHere;
        }
    }

    printf("%lld\n", maxSoFar);
    return 0;
}
