
/* Q36 (Loops without Arrays/Strings)
   Find HCF (GCD) of two numbers.
*/
#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d\n", a);
    return 0;
}
