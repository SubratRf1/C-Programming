#include <stdio.h>
#include <ctype.h>

/*
Q127 (File Handling)
Read text from input.txt, convert to uppercase, and write to output.txt.
*/

int main() {
    FILE *in, *out;
    char ch;

    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    if (in == NULL || out == NULL) {
        printf("File error.\n");
        return 1;
    }

    while ((ch = fgetc(in)) != EOF) {
        fputc(toupper(ch), out);
    }

    fclose(in);
    fclose(out);

    printf("Converted text written to output.txt\n");
    return 0;
}
