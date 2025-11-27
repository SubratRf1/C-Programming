#include <stdio.h>

/*
Q137 (Enum)
Enum for user roles and display messages.
*/

enum Role {ADMIN, USER, GUEST};

int main() {
    enum Role r = USER;

    if (r == ADMIN) printf("Admin Access\n");
    else if (r == USER) printf("User Access\n");
    else printf("Guest Access\n");

    return 0;
}
