#include <stdio.h>

/*
Q81 (Strings)
Count characters in a string without using built-in length functions.
*/

int main() {
    char str[200];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("Number of characters = %d\n", count);
    return 0;
}
