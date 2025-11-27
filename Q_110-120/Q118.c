#include <stdio.h>

/*
Q118 (Logic Enhancers)
Write a program to take an input array of size n. The array should contain all the integers
between 0 to n except for one. Print that missing number.
*/

int main(void) {
    int n, i;
    int arr[100000];
    long long sum = 0, expected;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 100000) {
        printf("Invalid n\n");
        return 1;
    }

    printf("Enter %d elements (between 0 and %d, one missing):\n", n, n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expected = (long long)n * (n + 1) / 2;
    printf("%lld\n", expected - sum);

    return 0;
}
