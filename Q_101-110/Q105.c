#include <stdio.h>

/*
Q105 (Logic Enhancers)
Write a program to take an integer array nums of size n, and print the majority element.
The majority element is the element that appears strictly more than floor(n / 2) times.
Print -1 if no such element exists. Note: Majority Element is not necessarily the element
that is present most number of times.
Follow-up (optional): Can you do it in O(n) Time Complexity?
*/

int main(void) {
    int n, i;
    int nums[1000];

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    /* Boyer-Moore majority vote algorithm */
    int candidate = 0, count = 0;
    for (i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    /* Verify candidate is actually majority */
    count = 0;
    for (i = 0; i < n; i++) {
        if (nums[i] == candidate) count++;
    }

    if (count > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }

    return 0;
}
