
/* Q45 (Loops without Arrays/Strings)
   Sum of series: 2/3 + 4/7 + 6/11 + ... up to n terms.
*/
#include <stdio.h>

int main() {
    int n, i;
    double sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (double)(2*i) / (double)(4*i-1);
    }

    printf("Sum = %.4f\n", sum);
    return 0;
}
