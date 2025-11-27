#include <stdio.h>

/*
Q88 (Strings)
Replace spaces with hyphens in a string.
*/

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("Modified string: %s", str);
    return 0;
}
