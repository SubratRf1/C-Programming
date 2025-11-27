
/* Q31 (Loops without Arrays/Strings)
   Print binary representation of a number.
*/
#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int bin[32], i = 0;
    while (n > 0) {
        bin[i++] = n % 2;
        n /= 2;
    }

    printf("Binary = ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bin[j]);

    return 0;
}
