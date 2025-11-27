\
    /* Q7 (User Inputs, Operations & Output)
       Write a program to swap two numbers without using a third variable.
    */
    #include <stdio.h>

    int main(void) {
        int a, b;

        printf("Enter two integers: ");
        if (scanf("%d %d", &a, &b) != 2) {
            printf("Invalid input.\n");
            return 1;
        }

        printf("Before swapping: a = %d, b = %d\n", a, b);

        /* Swapping without third variable using arithmetic operations */
        a = a + b;
        b = a - b;
        a = a - b;

        printf("After swapping: a = %d, b = %d\n", a, b);

        return 0;
    }
