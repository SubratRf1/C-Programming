#include <stdio.h>
#include <string.h>

/*
Q94 (Strings)
Find the longest word in a sentence.
*/

int main() {
    char str[300], word[100], longest[100];
    int i = 0, j = 0;
    int maxLen = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            word[j] = '\0';
            if (j > maxLen) {
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    return 0;
}
