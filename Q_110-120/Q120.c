#include <stdio.h>
#include <ctype.h>

/*
Q120 (File Handling)
Write a program to take a string input. Change it to sentence case.
(Sentence case: first alphabetic character of the string and first alphabetic character
after '.', '?', or '!' is capitalized; other alphabetic characters are lowercase.)
*/

int main(void) {
    char str[500];
    int i = 0;
    int newSentence = 1;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 1;
    }

    while (str[i] != '\0') {
        if (newSentence && isalpha((unsigned char)str[i])) {
            str[i] = (char)toupper((unsigned char)str[i]);
            newSentence = 0;
        } else {
            str[i] = (char)tolower((unsigned char)str[i]);
        }

        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            newSentence = 1;
        }

        i++;
    }

    printf("Sentence case: %s", str);
    return 0;
}
