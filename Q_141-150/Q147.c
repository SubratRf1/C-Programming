#include <stdio.h>

/*
Q147
Store employee data in a binary file using fwrite() and read using fread().
*/

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee e1 = {"John", 101, 50000};
    struct Employee e2;

    FILE *fp = fopen("emp.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("emp.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("Read from file: %s %d %.2f\n", e2.name, e2.id, e2.salary);

    return 0;
}
