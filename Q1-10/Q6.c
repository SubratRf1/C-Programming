\
    /* Q6 (User Inputs, Operations & Output)
       Write a program to swap two numbers using a third variable.
    */
    #include <stdio.h>

    int main(void) {
        int a, b, temp;

        printf("Enter two integers: ");
        if (scanf("%d %d", &a, &b) != 2) {
            printf("Invalid input.\n");
            return 1;
        }

        printf("Before swapping: a = %d, b = %d\n", a, b);

        temp = a;
        a = b;
        b = temp;

        printf("After swapping: a = %d, b = %d\n", a, b);

        return 0;
    }
