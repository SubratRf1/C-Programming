#include <stdio.h>

/*
Q124 (File Handling)
Copy contents from source file to destination file using fgetc() and fputc().
*/

int main() {
    FILE *src, *dest;
    char ch;
    char source[50], destination[50];

    printf("Enter source filename: ");
    scanf("%s", source);
    printf("Enter destination filename: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    dest = fopen(destination, "w");

    if (src == NULL || dest == NULL) {
        printf("File error.\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}
