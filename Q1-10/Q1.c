\
    /* Q1 (User Inputs, Operations & Output)
       Write a program to input two numbers and display their sum.
    */
    #include <stdio.h>

    int main(void) {
        double a, b, sum;

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &a, &b) != 2) {
            printf("Invalid input.\n");
            return 1;
        }

        sum = a + b;
        printf("Sum = %.2f\n", sum);

        return 0;
    }
