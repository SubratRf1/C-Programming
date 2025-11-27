#include <stdio.h>

/*
Q89 (Strings)
Count frequency of a given character in a string.
*/

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find frequency: ");
    scanf("%c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
