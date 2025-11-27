\
    /* Q17 (Conditional Statements)
       Write a program to find the roots of a quadratic equation and
       categorize them.
    */
    #include <stdio.h>
    #include <math.h>

    int main(void) {
        double a, b, c;
        double discriminant, root1, root2, realPart, imagPart;

        printf("Enter coefficients a, b and c (a != 0): ");
        if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0.0) {
            printf("Invalid input. Coefficient 'a' must be non-zero.\n");
            return 1;
        }

        discriminant = b * b - 4.0 * a * c;

        if (discriminant > 0.0) {
            root1 = (-b + sqrt(discriminant)) / (2.0 * a);
            root2 = (-b - sqrt(discriminant)) / (2.0 * a);
            printf("Roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
        } else if (discriminant == 0.0) {
            root1 = -b / (2.0 * a);
            printf("Roots are real and equal.\n");
            printf("Root = %.2f\n", root1);
        } else {
            realPart = -b / (2.0 * a);
            imagPart = sqrt(-discriminant) / (2.0 * a);
            printf("Roots are complex and imaginary.\n");
            printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
            printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
        }

        return 0;
    }
