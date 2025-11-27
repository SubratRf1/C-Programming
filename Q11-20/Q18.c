\
    /* Q18 (Conditional Statements)
       Write a program that accepts a percentage (0-100) and assigns a grade
       based on the following criteria:
       90-100: Grade A
       80-89: Grade B
       70-79: Grade C
       60-69: Grade D
       below 60: Grade F.
    */
    #include <stdio.h>

    int main(void) {
        double percentage;

        printf("Enter percentage (0-100): ");
        if (scanf("%lf", &percentage) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        if (percentage < 0.0 || percentage > 100.0) {
            printf("Percentage out of range.\n");
        } else if (percentage >= 90.0) {
            printf("Grade A\n");
        } else if (percentage >= 80.0) {
            printf("Grade B\n");
        } else if (percentage >= 70.0) {
            printf("Grade C\n");
        } else if (percentage >= 60.0) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }

        return 0;
    }
