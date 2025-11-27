#include <stdio.h>

/*
Q130 (File Handling)
Store multiple student records into a file and display them.
*/

int main() {
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    fp = fopen("students.txt", "w");
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter name, roll, marks: ");
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) != EOF) {
        printf("Name: %s Roll: %d Marks: %.2f\n", name, roll, marks);
    }

    fclose(fp);
    return 0;
}
