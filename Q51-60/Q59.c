
/* Q59 (Arrays 1D)
   Count even and odd numbers in an array.
*/
#include <stdio.h>

int main() {
    int n, i, even = 0, odd = 0, arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\nOdd = %d\n", even, odd);
    return 0;
}
