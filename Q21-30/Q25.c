
/* Q25 (Conditional Statements)
   Basic calculator using switch-case.
*/
#include <stdio.h>

int main() {
    double a, b;
    char op;

    printf("Enter expression (a operator b): ");
    scanf("%lf %c %lf", &a, &op, &b);

    switch (op) {
        case '+': printf("Result = %.2f\n", a + b); break;
        case '-': printf("Result = %.2f\n", a - b); break;
        case '*': printf("Result = %.2f\n", a * b); break;
        case '/':
            if (b != 0) printf("Result = %.2f\n", a / b);
            else printf("Division by zero not allowed\n");
            break;
        case '%': printf("Result = %d\n", (int)a % (int)b); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
