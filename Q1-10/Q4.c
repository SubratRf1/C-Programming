\
    /* Q4 (User Inputs, Operations & Output)
       Write a program to calculate the area and circumference of a circle
       given its radius.
    */
    #include <stdio.h>

    #define PI 3.14159265358979323846

    int main(void) {
        double radius, area, circumference;

        printf("Enter radius of the circle: ");
        if (scanf("%lf", &radius) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

        area = PI * radius * radius;
        circumference = 2 * PI * radius;

        printf("Area = %.2f\n", area);
        printf("Circumference = %.2f\n", circumference);

        return 0;
    }
