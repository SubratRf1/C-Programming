
/* Q28 (Loops without Arrays/Strings)
   Print the product of even numbers from 1 to n.
*/
#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i += 2)
        product *= i;

    printf("Product = %lld\n", product);
    return 0;
}
