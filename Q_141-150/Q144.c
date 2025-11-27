#include <stdio.h>

/*
Q144
Write a function that accepts a structure as parameter and prints its members.
*/

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
}

int main() {
    struct Student s;

    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);
    display(s);

    return 0;
}
