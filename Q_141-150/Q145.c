#include <stdio.h>

/*
Q145
Return a structure containing top student's details from a function.
*/

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks)
            maxIndex = i;
    }
    return s[maxIndex];
}

int main() {
    struct Student s[5], top;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    top = getTopStudent(s, 5);
    printf("Top Student: %s %d %.2f\n", top.name, top.roll_no, top.marks);

    return 0;
}
