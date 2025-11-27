#include <stdio.h>

/*
Q129 (File Handling)
Read integers from numbers.txt, calculate their sum and average.
*/

int main() {
    FILE *fp;
    int num, count = 0;
    long long sum = 0;

    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("File not found.\n");
        return 1;
    }

    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count > 0) {
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", (double)sum / count);
    } else {
        printf("No numbers found.\n");
    }

    return 0;
}
