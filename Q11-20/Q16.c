\
    /* Q16 (Conditional Statements)
       Write a program to input three numbers and find the largest among
       them using if–else.
    */
    #include <stdio.h>

    int main(void) {
        double a, b, c, largest;

        printf("Enter three numbers: ");
        if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
            printf("Invalid input.\n");
            return 1;
        }

        largest = a;

        if (b > largest) {
            largest = b;
        }
        if (c > largest) {
            largest = c;
        }

        printf("The largest number is %.2f\n", largest);

        return 0;
    }
