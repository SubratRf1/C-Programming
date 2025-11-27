#include <stdio.h>

/*
Q138 (Enum)
Print all enum names and values using a loop.
*/

enum Color {RED, BLUE, GREEN};

int main() {
    for (int i = RED; i <= GREEN; i++) {
        printf("Enum value: %d\n", i);
    }
    return 0;
}
