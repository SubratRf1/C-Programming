#include <stdio.h>
#include <string.h>

/*
Q93 (Strings)
Check if two strings are anagrams of each other.
*/

int main() {
    char s1[200], s2[200];
    int count[256] = {0}, i;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s1[i] != '\0'; i++)
        count[(unsigned char)s1[i]]++;

    for (i = 0; s2[i] != '\0'; i++)
        count[(unsigned char)s2[i]]--;

    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Strings are not anagrams.\n");
            return 0;
        }
    }

    printf("Strings are anagrams.\n");
    return 0;
}
