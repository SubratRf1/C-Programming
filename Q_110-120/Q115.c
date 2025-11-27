#include <stdio.h>
#include <string.h>

/*
Q115 (Logic Enhancers)
Write a program to take two strings s and t as inputs (assume all characters are lowercase).
The task is to determine if s and t are valid anagrams, meaning they contain the same characters
with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
*/

int main(void) {
    char s[300], t[300];
    int count[26] = {0};
    int i;

    printf("Enter first string: ");
    if (fgets(s, sizeof(s), stdin) == NULL) return 1;
    printf("Enter second string: ");
    if (fgets(t, sizeof(t), stdin) == NULL) return 1;

    int n1 = (int)strlen(s);
    if (n1 > 0 && s[n1 - 1] == '\n') s[n1 - 1] = '\0';
    int n2 = (int)strlen(t);
    if (n2 > 0 && t[n2 - 1] == '\n') t[n2 - 1] = '\0';

    if (n1 != n2) {
        printf("Not Anagram\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }
    for (i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    for (i = 0; i < 26; i++) {
        if (count[i] != 0) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
