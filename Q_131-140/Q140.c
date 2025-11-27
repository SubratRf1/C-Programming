#include <stdio.h>

/*
Q140 (Enum)
Define a struct with enum Gender and print person's gender.
*/

enum Gender {MALE, FEMALE};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Alex", MALE};

    if (p.gender == MALE) printf("Gender: Male\n");
    else printf("Gender: Female\n");

    return 0;
}
