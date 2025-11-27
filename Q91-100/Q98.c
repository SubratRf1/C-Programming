#include <stdio.h>
#include <string.h>

/*
Q98 (Strings)
Print initials of a name with the surname displayed in full.
*/

int main() {
    char str[200];
    int i = 0, lastSpace = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    printf("Output: ");
    printf("%c. ", str[0]);

    for (i = lastSpace + 1; str[i] != '\0'; i++)
        printf("%c", str[i]);

    return 0;
}
