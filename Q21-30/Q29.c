
/* Q29 (Loops without Arrays/Strings)
   Calculate factorial of a number.
*/
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %lld\n", fact);
    return 0;
}
