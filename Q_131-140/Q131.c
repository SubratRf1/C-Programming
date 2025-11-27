#include <stdio.h>

/*
Q131 (Enum)
Create an enumeration for days (SUNDAY to SATURDAY) and print each with its value.
*/

enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};

int main() {
    enum Day d;
    for (d = SUNDAY; d <= SATURDAY; d++) {
        printf("Day %d\n", d);
    }
    return 0;
}
