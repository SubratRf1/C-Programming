#include <stdio.h>

/*
Q139 (Enum)
Show that enums store integers by printing assigned values.
*/

enum Test {X=5, Y=10};

int main() {
    printf("X = %d, Y = %d\n", X, Y);
    return 0;
}
