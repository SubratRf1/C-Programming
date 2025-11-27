#include <stdio.h>

/*
Q119 (Logic Enhancers)
Write a program to take an integer array as input. Only one element will be repeated.
Print the repeated element. Try to find the result in one single iteration.
(Simple solution with nested loops; an O(n) one-pass solution can be done using hashing.)
*/

int main(void) {
    int n, i, j;
    int arr[1000];

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n <= 1 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements (with exactly one repeated):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d\n", arr[i]);
                return 0;
            }
        }
    }

    printf("No repeated element found\n");
    return 0;
}
