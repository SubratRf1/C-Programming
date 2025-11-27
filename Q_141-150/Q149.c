#include <stdio.h>
#include <stdlib.h>

/*
Q149
Use malloc() to allocate structure memory dynamically and print details.
*/

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student *s;

    s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    scanf("%s %d %f", s->name, &s->roll_no, &s->marks);

    printf("Student Details:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",
           s->name, s->roll_no, s->marks);

    free(s);
    return 0;
}
