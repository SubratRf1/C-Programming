#include <stdio.h>
#include <string.h>

/*
Q96 (Strings)
Reverse each word in a sentence without changing the word order.
*/

int main() {
    char str[300], word[100];
    int i = 0, j = 0, k;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            for (k = j - 1; k >= 0; k--)
                printf("%c", word[k]);
            if (str[i] == ' ')
                printf(" ");
            j = 0;
            if (str[i] == '\0' || str[i] == '\n')
                break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("\n");
    return 0;
}
