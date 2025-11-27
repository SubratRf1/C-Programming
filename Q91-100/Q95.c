#include <stdio.h>
#include <string.h>

/*
Q95 (Strings)
Check if one string is a rotation of another.
*/

int main() {
    char s1[200], s2[200], temp[400];

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    strcpy(temp, s1);
    strcat(temp, s1);

    if (strstr(temp, s2))
        printf("Second string is a rotation of first.\n");
    else
        printf("Second string is not a rotation of first.\n");

    return 0;
}
