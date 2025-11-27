
/* Q37 (Loops without Arrays/Strings)
   Find LCM of two numbers.
*/
#include <stdio.h>

int main() {
    int a, b, x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("LCM = %d\n", (x * y) / a);
    return 0;
}
