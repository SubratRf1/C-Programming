
/* Q42 (Loops without Arrays/Strings)
   Check if a number is a perfect number.
*/
#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        printf("Perfect Number\n");
    else
        printf("Not a Perfect Number\n");

    return 0;
}
