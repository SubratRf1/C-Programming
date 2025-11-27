\
    /* Q8 (User Inputs, Operations & Output)
       Write a program to find and display the sum of the first n natural numbers.
    */
    #include <stdio.h>

    int main(void) {
        int n, i;
        long long sum = 0;

        printf("Enter value of n: ");
        if (scanf("%d", &n) != 1 || n < 0) {
            printf("Invalid input.\n");
            return 1;
        }

        for (i = 1; i <= n; ++i) {
            sum += i;
        }

        printf("Sum of first %d natural numbers = %lld\n", n, sum);

        return 0;
    }
