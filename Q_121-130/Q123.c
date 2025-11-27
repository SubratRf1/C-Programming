#include <stdio.h>
#include <ctype.h>

/*
Q123 (File Handling)
Count total characters, words, and lines in a text file.
*/

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("input.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;
        if (ch == '\n') lines++;

        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters: %d\nWords: %d\nLines: %d\n",
           characters, words, lines);
    return 0;
}
