
/* Q60 (Arrays 1D)
   Count positive, negative and zero elements.
*/
#include <stdio.h>

int main() {
    int n, i, pos = 0, neg = 0, zero = 0, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);
    return 0;
}
