#include <stdio.h>

/*
Q136 (Enum)
Enum menu choices and perform operations using switch.
*/

enum Choice {ADD=1, SUBTRACT, MULTIPLY};

int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.ADD 2.SUBTRACT 3.MULTIPLY\n");
    scanf("%d", &ch);

    switch (ch) {
        case ADD: printf("Result = %d\n", a + b); break;
        case SUBTRACT: printf("Result = %d\n", a - b); break;
        case MULTIPLY: printf("Result = %d\n", a * b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
