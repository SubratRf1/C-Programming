
/* Q32 (Loops without Arrays/Strings)
   Check if a number is a palindrome.
*/
#include <stdio.h>

int main() {
    int n, temp, rev = 0, rem;
    printf("Enter number: ");
    scanf("%d", &n);

    temp = n;
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    if (temp == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
