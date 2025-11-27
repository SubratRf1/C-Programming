#include <stdio.h>
#include <math.h>

/*
Q104 (Logic Enhancers)
Write a Program to take a positive integer n as input, and find the pivot integer x such that the
sum of all elements between 1 and x inclusively equals the sum of all elements between x and n
inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is
guaranteed that there will be at most one pivot integer for the given input.
Follow-up 1 (optional): Can you do it in O(log n) Time Complexity?
Follow-up 2 (optional): Can you do it in O(1) Time Complexity?
*/

int main(void) {
    int n;
    long long S;
    long long x;

    printf("Enter n: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid n\n");
        return 1;
    }

    /* Sum from 1..n = n(n+1)/2, pivot x exists if x^2 = sum(1..n) */
    S = (long long)n * (n + 1) / 2;
    x = (long long)(sqrt((double)S) + 0.5);  /* nearest integer */

    if (x * x == S && x >= 1 && x <= n) {
        printf("%lld\n", x);
    } else {
        printf("-1\n");
    }

    return 0;
}
