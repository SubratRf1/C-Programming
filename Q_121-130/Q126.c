#include <stdio.h>

/*
Q126 (File Handling)
Check if a file exists and display its contents.
*/

int main() {
    FILE *fp;
    char filename[50], ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("File does not exist.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}
