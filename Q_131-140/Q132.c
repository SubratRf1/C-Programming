#include <stdio.h>

/*
Q132 (Enum)
Enum for traffic lights and display action.
*/

enum Light {RED, YELLOW, GREEN};

int main() {
    enum Light l = GREEN;

    if (l == RED) printf("Stop\n");
    else if (l == YELLOW) printf("Wait\n");
    else printf("Go\n");

    return 0;
}
