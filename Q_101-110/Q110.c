#include <stdio.h>

/*
Q110 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the
maximum element in each subarray of size k moving from left to right. Print the maximum elements
for each window separated by spaces as output.
(Brute force solution)
*/

int main(void) {
    int n, k, i, j;
    int arr[1000];

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

    for (i = 0; i <= n - k; i++) {
        int max = arr[i];
        for (j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }
        printf("%d", max);
        if (i != n - k) printf(" ");
    }
    printf("\n");

    return 0;
}
