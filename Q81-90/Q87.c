#include <stdio.h>
#include <ctype.h>

/*
Q87 (Strings)
Count spaces, digits, and special characters in a string.
*/

int main() {
    char str[200];
    int i = 0, spaces = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (isdigit(str[i]))
            digits++;
        else if (!isalnum(str[i]) && str[i] != '\n')
            special++;
        i++;
    }

    printf("Spaces = %d\nDigits = %d\nSpecial Characters = %d\n", spaces, digits, special);
    return 0;
}
