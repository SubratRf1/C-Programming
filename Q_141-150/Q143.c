#include <stdio.h>

/*
Q143
Find and print the student with the highest marks.
*/

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int maxIndex = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (int i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("Top Student:\n");
    printf("Name: %s Roll: %d Marks: %.2f\n",
           s[maxIndex].name, s[maxIndex].roll_no, s[maxIndex].marks);

    return 0;
}
