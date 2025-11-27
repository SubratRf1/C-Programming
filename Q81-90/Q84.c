#include <stdio.h>

/*
Q84 (Strings)
Convert a lowercase string to uppercase without using built-in functions.
*/

int main() {
    char str[200];
    int i = 0;

    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase string: %s", str);
    return 0;
}
