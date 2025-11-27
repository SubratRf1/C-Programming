#include <stdio.h>
#include <ctype.h>

/*
Q128 (File Handling)
Count vowels and consonants in a text file.
*/

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch);
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
