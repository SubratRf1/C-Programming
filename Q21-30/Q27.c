
/* Q27 (Loops without Arrays/Strings)
   Print the sum of the first n odd numbers.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n * 2; i += 2)
        sum += i;

    printf("Sum = %d\n", sum);
    return 0;
}
