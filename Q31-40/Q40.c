
/* Q40 (Loops without Arrays/Strings)
   Find 1’s complement of a binary number.
*/
#include <stdio.h>

int main() {
    long long bin;
    char ch;
    printf("Enter binary number: ");
    scanf("%lld", &bin);

    printf("1's Complement: ");
    while (bin != 0) {
        ch = (bin % 10 == 0) ? '1' : '0';
        printf("%c", ch);
        bin /= 10;
    }

    return 0;
}
