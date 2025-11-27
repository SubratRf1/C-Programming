\
    /* Q2 (User Inputs, Operations & Output)
       Write a program to input two numbers and display their sum, difference,
       product, and quotient. Division by zero should be handled carefully.
    */
    #include <stdio.h>

    int main(void) {
        double a, b;

        printf("Enter two numbers: ");
        if (scanf("%lf %lf", &a, &b) != 2) {
            printf("Invalid input.\n");
            return 1;
        }

        printf("Sum = %.2f\n", a + b);
        printf("Difference = %.2f\n", a - b);
        printf("Product = %.2f\n", a * b);

        if (b != 0.0) {
            printf("Quotient = %.2f\n", a / b);
        } else {
            printf("Quotient: Division by zero is not allowed.\n");
        }

        return 0;
    }
