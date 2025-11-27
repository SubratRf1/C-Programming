
/* Q43 (Loops without Arrays/Strings)
   Check if a number is a strong number.
*/
#include <stdio.h>

int main() {
    int n, temp, rem, i;
    long long sum = 0, fact;

    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        fact = 1;
        for (i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        printf("Strong Number\n");
    else
        printf("Not a Strong Number\n");

    return 0;
}
