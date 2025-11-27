#include <stdio.h>
#include <stdlib.h>

/*
Q64 (Arrays (1D))
Find the digit that occurs the most times in an integer number.
*/

int main(void) {
    long long num;
    int count[10] = {0};
    int digit, maxCount = 0, resultDigit = 0;
    long long temp;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    temp = llabs(num);

    if (temp == 0) {
        // number is 0
        printf("Digit with maximum frequency: 0 (occurs 1 time)\n");
        return 0;
    }

    while (temp > 0) {
        digit = (int)(temp % 10);
        count[digit]++;
        temp /= 10;
    }

    for (digit = 0; digit <= 9; digit++) {
        if (count[digit] > maxCount) {
            maxCount = count[digit];
            resultDigit = digit;
        }
    }

    printf("Digit with maximum frequency: %d (occurs %d times)\n",
           resultDigit, maxCount);

    return 0;
}
