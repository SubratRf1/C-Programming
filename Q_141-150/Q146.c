#include <stdio.h>

/*
Q146
Create Employee structure with nested Date structure for joining date and print details.
*/

struct Date {
    int day, month, year;
};

struct Employee {
    char name[50];
    int id;
    struct Date doj;
};

int main() {
    struct Employee e;

    scanf("%s %d %d %d %d",
          e.name, &e.id,
          &e.doj.day, &e.doj.month, &e.doj.year);

    printf("Employee: %s\nID: %d\nDate of Joining: %02d/%02d/%04d\n",
           e.name, e.id, e.doj.day, e.doj.month, e.doj.year);

    return 0;
}
