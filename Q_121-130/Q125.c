#include <stdio.h>

/*
Q125 (File Handling)
Append a line of text to an existing file.
*/

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("info.txt", "a");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    printf("Enter text to append: ");
    getchar();
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
