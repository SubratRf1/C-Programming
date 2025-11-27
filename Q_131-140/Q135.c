#include <stdio.h>

/*
Q135 (Enum)
Assign explicit values starting from 10 and print them.
*/

enum Numbers {A=10, B, C, D};

int main() {
    printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
    return 0;
}
