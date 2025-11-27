#include <stdio.h>

/*
Q113 (Logic Enhancers)
Write a program to take an integer array arr and an integer k as inputs. The task is to find the
kth smallest element in the array. Print the kth smallest element as output.
(Simple sort-based solution)
*/

int main(void) {
    int n, k, i, j, temp;
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

    /* Simple selection sort */
    for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("%d\n", arr[k - 1]);
    return 0;
}
