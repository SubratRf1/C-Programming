
/* Q44 (Loops without Arrays/Strings)
   Sum of series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
*/
#include <stdio.h>

int main() {
    int n, i;
    double sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        sum += (double)(2*i-1) / (double)(2*i);
    }

    printf("Sum = %.4f\n", sum);
    return 0;
}
