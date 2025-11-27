\
    /* Q9 (User Inputs, Operations & Output)
       Write a program to calculate simple and compound interest for given
       principal, rate, and time.
    */
    #include <stdio.h>
    #include <math.h>

    int main(void) {
        double principal, rate, time;
        double simple_interest, compound_interest, amount;

        printf("Enter principal, rate (in %%), and time (in years): ");
        if (scanf("%lf %lf %lf", &principal, &rate, &time) != 3) {
            printf("Invalid input.\n");
            return 1;
        }

        simple_interest = (principal * rate * time) / 100.0;

        amount = principal * pow(1.0 + rate / 100.0, time);
        compound_interest = amount - principal;

        printf("Simple Interest = %.2f\n", simple_interest);
        printf("Compound Interest = %.2f\n", compound_interest);

        return 0;
    }
