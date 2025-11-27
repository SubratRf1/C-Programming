#include <stdio.h>

/*
Q90 (Strings)
Toggle case of each character in a string.
*/

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }

    printf("Toggled string: %s", str);
    return 0;
}
