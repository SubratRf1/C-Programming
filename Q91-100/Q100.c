#include <stdio.h>
#include <string.h>

/*
Q100 (Strings)
Print all sub-strings of a string.
*/

int main() {
    char str[200];
    int i, j, k, n;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    n = strlen(str);
    if (str[n - 1] == '\n')
        n--;

    printf("All substrings:\n");
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++)
                printf("%c", str[k]);
            printf("\n");
        }
    }

    return 0;
}
