#include <stdio.h>

/*
Q107 (Logic Enhancers)
Write a program to take an array arr[] of integers as input, the task is to find the previous
greater element for each element of the array in order of their appearance in the array.
Previous greater element of an element in the array is the nearest element on the left which
is greater than the current element. If there does not exist previous greater of current element,
then previous greater element for current element is -1.
N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.
*/

int main(void) {
    int n, i, j;
    int arr[1000];
    int pge[1000];

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int found = -1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                found = arr[j];
                break;
            }
        }
        pge[i] = found;
    }

    for (i = 0; i < n; i++) {
        printf("%d", pge[i]);
        if (i != n - 1) printf(",");
    }
    printf("\n");

    return 0;
}
