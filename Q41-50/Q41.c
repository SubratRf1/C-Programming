
/* Q41 (Loops without Arrays/Strings)
   Swap the first and last digit of a number.
*/
#include <stdio.h>

int main() {
    int n, first, last, digits = 0, temp, result;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    last = n % 10;

    while (temp >= 10) {
        temp /= 10;
        digits++;
    }
    first = temp;

    result = last * pow(10, digits);
    result += (n % (int)pow(10, digits)) / 10 * 10;
    result += first;

    printf("After swapping = %d\n", result);
    return 0;
}
