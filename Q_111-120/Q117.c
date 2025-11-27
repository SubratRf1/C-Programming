#include <stdio.h>

/*
Q117 (Logic Enhancers)
Write a program to take two sorted arrays of size m and n as input. Merge both the arrays
such that the merged array is also sorted. Print the merged array.
*/

int main(void) {
    int m, n, i, j, k;
    int a[1000], b[1000], c[2000];

    printf("Enter size of first sorted array (max 1000): ");
    if (scanf("%d", &m) != 1 || m < 0 || m > 1000) {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter %d elements of first sorted array:\n", m);
    for (i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter size of second sorted array (max 1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }
    printf("Enter %d elements of second sorted array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    i = j = k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    while (i < m) {
        c[k++] = a[i++];
    }
    while (j < n) {
        c[k++] = b[j++];
    }

    printf("Merged sorted array:\n");
    for (i = 0; i < k; i++) {
        printf("%d", c[i]);
        if (i != k - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
