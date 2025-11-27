#include <stdio.h>
#include <ctype.h>

/*
Q83 (Strings)
Count vowels and consonants in a string.
*/

int main() {
    char str[200];
    int i = 0, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }

    printf("Vowels = %d\nConsonants = %d\n", vowels, consonants);
    return 0;
}
