\
    /* Q12 (Conditional Statements)
       Write a program to input an integer and check whether it is
       positive, negative or zero using nested if–else.
    */
    #include <stdio.h>

    int main(void) {
        int n;

        printf("Enter an integer: ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (n >= 0) {
            if (n == 0) {
                printf("The number is zero.\n");
            } else {
                printf("The number is positive.\n");
            }
        } else {
            printf("The number is negative.\n");
        }

        return 0;
    }
