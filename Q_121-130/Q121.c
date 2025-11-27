#include <stdio.h>

/*
Q121 (File Handling)
Create info.txt, take user name and age, and write using fprintf().
*/

int main() {
    FILE *fp;
    char name[50];
    int age;

    fp = fopen("info.txt", "w");
    if (fp == NULL) {
        printf("File could not be created.\n");
        return 1;
    }

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter age: ");
    scanf("%d", &age);

    fprintf(fp, "Name: %sAge: %d\n", name, age);
    fclose(fp);

    printf("Data successfully saved to info.txt\n");
    return 0;
}
