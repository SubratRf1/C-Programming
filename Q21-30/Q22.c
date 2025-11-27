
/* Q22 (Conditional Statements)
   Find profit or loss percentage.
*/
#include <stdio.h>

int main() {
    double cp, sp, percent;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%lf %lf", &cp, &sp);

    if (sp > cp) {
        percent = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", percent);
    } else if (cp > sp) {
        percent = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", percent);
    } else {
        printf("No Profit No Loss\n");
    }
    return 0;
}
