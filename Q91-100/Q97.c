#include <stdio.h>

/*
Q97 (Strings)
Print the initials of a name.
*/

int main() {
    char str[200];
    int i = 0;

    printf("Enter full name: ");
    fgets(str, sizeof(str), stdin);

    printf("Initials: ");
    printf("%c", str[0]);

    while (str[i] != '\0') {
        if (str[i] == ' ' && str[i + 1] != '\0')
            printf("%c", str[i + 1]);
        i++;
    }

    printf("\n");
    return 0;
}
