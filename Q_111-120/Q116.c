#include <stdio.h>

/*
Q116 (Logic Enhancers)
Write a program to take an integer array nums which contains only positive integers,
and an integer target as inputs. The goal is to find two distinct indices i and j in the
array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists
and return the indices in any order. Print the two indices separated by a space as output.
If no solution exists, print "-1 -1".
*/

int main(void) {
    int n, i, j, target;
    int nums[1000];

    printf("Enter number of elements (max 1000): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 1000) {
        printf("Invalid size\n");
        return 1;
    }

    printf("Enter %d positive integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1\n");
    return 0;
}
