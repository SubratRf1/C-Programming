#include <stdio.h>

/*
Q122 (File Handling)
Read contents of info.txt using fgets() and print till EOF.
*/

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("info.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);
    return 0;
}
