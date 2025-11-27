
/* Q38 (Loops without Arrays/Strings)
   Find sum of digits of a number.
*/
#include <stdio.h>

int main() {
    int n, sum = 0, rem;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
