
/* Q39 (Loops without Arrays/Strings)
   Find product of odd digits of a number.
*/
#include <stdio.h>

int main() {
    int n, rem;
    long long product = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        if (rem % 2 != 0)
            product *= rem;
        n /= 10;
    }

    printf("Product of odd digits = %lld\n", product);
    return 0;
}
